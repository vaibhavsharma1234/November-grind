#include<bits/stdc++.h>
using namespace std;
// question 1
#define endl "\n"
#define int long long 
const int MOD = 1e9 +7;
const int INF = LLONG_MAX >> 1;
int n,x;
int a[1000013];
int dp[1000013];
int solve(int sum){
   if(sum <0){
    return INF;
   }
   if(sum ==0){
    return 0;
   }
   
   if(dp[sum] != -1){
    return dp[sum];
   }
   int ans =INF;
   for(int i=0;i<n;i++){
   ans = min(ans, solve(sum-a[i])+1);
   }
   return dp[sum]=ans;

  
}
signed main(){
    memset(dp,-1,sizeof dp);
   
    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans =  solve(x);
    
    cout <<(ans==INF ? -1:ans)<< endl;
}

