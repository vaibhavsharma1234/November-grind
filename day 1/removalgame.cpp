#include<bits/stdc++.h>
using namespace std;
// question 1
#define endl "\n"
#define int long long 
const int MOD = 1e9 +7;
const int INF = LLONG_MAX >> 1;
int dp[5013][5013][2];
int a[5013];
int pf[5013];
int solve(int l,int r,int t){
    if(l==r){
        return a[l];
    }
    if(dp[l][r][t] !=  -1){
        return dp[l][r][t];
    }
    return dp[l][r][t]= max((pf[r]-pf[l-1])- solve(l+1,r,1-t),(pf[r]-pf[l-1])-solve(l,r-1,1-t));
}
signed main(){
    memset(dp,-1,sizeof dp);
    int n;
    cin >> n;
    pf[0] =0;
    for(int  i=1;i<=n;i++){
        cin >> a[i];
        pf[i]=pf[i-1]+a[i];
    }
    // int l=a[0];
    // int r=a[n-1];
    cout << solve(1,n,0)<< endl;
}

