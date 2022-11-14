//{ Driver Code Starts
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         vector<vector<int> > matrix1=matrix;
       
        int n=matrix.size();
        int m=matrix[0].size();
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 int sum=0;
                if(matrix1[i][j]==0){
                    int k=i,l=i,p=j,o=j;
                    while(k>0){
                        
                        matrix[k-1][j]=0;
                        k--;
                    }
                    while(l<n-1){
                        
                        matrix[l+1][j]=0;
                        l++;
                    }
                    while(p>0){
                        
                        matrix[i][p-1]=0;
                        p--;
                    }
                    while(o<m-1){
                        
                         matrix[i][o+1]=0;
                        o++;
                    }
                    
                   
                    
                }
            }
        }
    }
};
//
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        vector<vector<int> > matrix1=matrix;
       
        int n=matrix.size();
        int m=matrix[0].size();
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 int sum=0;
                if(matrix1[i][j]==0){
                    if(i>0){
                        sum+=matrix1[i-1][j];
                        matrix[i-1][j]=0;
                    }
                    if(i<n-1){
                        sum+=matrix1[i+1][j];
                        matrix[i+1][j]=0;
                    }
                    if(j>0){
                        sum+=matrix1[i][j-1];
                        matrix[i][j-1]=0;
                    }
                    if(j<m-1){
                         sum+=matrix1[i][j+1];
                         matrix[i][j+1]=0;
                    }
                    matrix[i][j]=sum;
                    // break;
                   
                    
                }
            }
           
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends