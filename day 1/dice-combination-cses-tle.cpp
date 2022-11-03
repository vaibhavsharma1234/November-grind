#include<bits/stdc++.h>
using namespace std;
// question 1
#define endl "\n"
#define int long long 
const int MOD = 1e9 +7;
const int INF = LLONG_MAX >> 1;
int dp[1000013];
int solve(int n){
    if(n==0){
        return 1;

    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=0;
    for(int i=1;i<=6;i++){
        ans+=solve(n-i);
    }
    return dp[n]= ans%MOD;
}
signed main(){
    memset(dp,-1,sizeof dp);
    int n;
    cin >> n;
    cout << solve(n)<< endl;
}

