//{ Driver Code Starts
// C++ program to search an element in row-wise
// and column-wise sorted matrix
#include <bits/stdc++.h>
using namespace std;

/* Searches the element x in mat[][]. If the
element is found, then prints its position
and returns true, otherwise prints "not found"
and returns false */
int search(int mat[4][4], int n, int x)
{
	if (n == 0)
		return -1;

	int smallest = mat[0][0], largest = mat[n - 1][n - 1];
	if (x < smallest || x > largest)
		return -1;

	// set indexes for top right element
	int i = 0, j = n - 1;
	while (i < n && j >= 0) {
		if (mat[i][j] == x) {
			cout << "Element found at " << i << ", " << j;
			return 1;
		}
		if (mat[i][j] > x)
			j--;

		// Check if mat[i][j] < x
		else
			i++;
	}

	cout << "n Element not found";
	return 0;
}

// Driver code
int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };

	// Function call
	search(mat, 4, 29);

	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)

//
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int N=matrix.size();
        int X=target;
        int M= matrix[0].size();
        
	   while(i<N){
	       if(matrix[i][0]<=X&&matrix[i][M-1]>=X){
	           for(int j=0;j<M;j++){
	               if(matrix[i][j]==X){
	                   return true;
	               }
	           }
	       }
	       i++;
	       
	   }
	   return false;
	
    }
};



















#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(mat[i][j]==X){
	                return 1;
	            }
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends