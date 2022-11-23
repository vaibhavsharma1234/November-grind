//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        map<int,int> mp;
        int pf[n+1]={0};
        
        int max1=0;
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+A[i-1];
        }
        for(int i=1;i<=n;i++){
            if(pf[i]==0){
                max1=i;
            }
            if(mp.find(pf[i])==mp.end()){
                mp.insert({pf[i],i});
                
                
                
            }
          
            else{
                max1=max(max1,i-mp[pf[i]]);
                
            }
        }
        return max1;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends