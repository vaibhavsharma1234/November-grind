//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int wl=0,wr=0;
        int bestl=0,range=0;
        int cnt=0;
        while(wr<n){
            if(cnt<=m){
                if(arr[wr]==0){
                cnt++;
               
            }
             wr++;
            }
            if(cnt>m){
                if(arr[wl]==0 ){
                cnt--;
                
                
            }
            wl++;
            }
             
            if((wr-wl)>range &&cnt<=m){
                range=wr-wl;
                bestl=wl;
            }
        }
        return range;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends