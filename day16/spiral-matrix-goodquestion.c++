//{ Driver Code Starts
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int col=0,row=0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>v;
        while(row<m&&col<n){
            for(int i=col;i<n;i++){
                v.push_back(matrix[row][i]);
            }
            row++;
            for(int i=row;i<m;i++){
                  v.push_back(matrix[i][n-1]);
            }
            n--;
            if(row<m){
                  for(int i=n-1;i>=col;i--){
                 v.push_back(matrix[m-1][i]);
            }
                m--;
            }
            if(col<n){
                for(int i=m-1;i>=row;i--){
                 v.push_back(matrix[i][col]);
            }
                col++;
            }
          
            
        }
        return v;
        
    }
};
//
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int row=0,col=0;
        int cnt=0;
        while(row<n&&col<m){
            for(int i=col;i<m;i++){
                cnt++;
                if(cnt==k){
                    return a[row][i];
                }
            }
            row++;
            for(int i=row;i<n;i++){
                 cnt++;
                if(cnt==k){
                    return a[i][m-1];
                }
            }
            m--;
            if(row<n){
                for(int i=m-1;i>=col;i--){
                     cnt++;
                if(cnt==k){
                    return a[n-1][i];
                }
                }
                n--;
            }
             if(col<m){
                for(int i=n-1;i>=row;i--){
                     cnt++;
                if(cnt==k){
                    return a[i][col];
                }
                }
                col++;
            }
        }
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends