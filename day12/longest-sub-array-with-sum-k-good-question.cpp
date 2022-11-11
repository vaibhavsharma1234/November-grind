//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
//  hashing se kiya hai good approach
// window sliding only for non zero numbers
// k=sum+(sum-k)

// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>mp;
        int maxlen=0;
        int sum=0;
        int k=K;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
            if(sum==k){
                maxlen=i+1;
                // when subarray starts from 0;
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            if(mp.find(sum-k)!=mp.end()){
                if(maxlen<(i-mp[sum-k])){
                    maxlen=i-mp[sum-k];
                }
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends