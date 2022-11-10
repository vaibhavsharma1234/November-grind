//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// duplicates ke liye just check ki vector.back!= element we want to insert
// if (arr1[i] <= arr2[j]) // Case 1 and 2
//     {
//       if (Union.size() == 0 || Union.back() != arr1[i])
//         Union.push_back(arr1[i]);
//       i++;
//     }
// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> temp;
        int i=0,j=0;
        while(i<n&&j<m){
            if(arr1[i]<arr2[j]){
                temp.push_back(arr1[i]);
                i++;
                while(i<n && arr1[i]==arr1[i-1]){
                    i++;
                }
            }
            else if(arr1[i]>arr2[j]){
                temp.push_back(arr2[j]);
                j++;
                while(j<m && arr2[j]==arr2[j-1]){
                    j++;
                }
            }
            else{
                 temp.push_back(arr1[i]);
                 i++;
                 j++;
                  while(i<n && arr1[i]==arr1[i-1]){
                    i++;
                }
                while(j<m && arr2[j]==arr2[j-1]){
                    j++;
                }
            }
        }
        while(i<n ){
            if(arr1[i]!=arr1[i-1]){
                 temp.push_back(arr1[i]);
                    i++;
                     while(i<n && arr1[i]==arr1[i-1]){
                    i++;
                }
                    
            }
            else{
                 while(i<n && arr1[i]==arr1[i-1]){
                    i++;
                }
                if(i<n){
                    temp.push_back(arr1[i]);
                    i++;
                }
                
            }
           
                }
                while(j<m ){
                     if(arr2[j]!=arr2[j-1]){
                 temp.push_back(arr2[j]);
                    j++;
                     while(i<n && arr2[j]==arr2[j-1]){
                    j++;
                }
                    
            }
            else{
                 while(j<m && arr2[j]==arr2[j-1]){
                    j++;
                }
                if(j<m){
                    temp.push_back(arr2[j]);
                    j++;
                }
                
            }
                }
        
        return temp;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

//  another soln can be using map and set
// this is soln using two pointer and better then mine 
#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}