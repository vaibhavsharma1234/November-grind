#include<bits/stdc++.h>
using namespace std;
// question 3
#define endl "\n"
#define int long long 
const int MOD = 1e9 +7;
const int INF = LLONG_MAX >> 1;
int n;
int dp[1000013];
int solve(int n){
    if(n == 0){
        return 0;
    }
    int ans =INF;
    if(dp[n]!=-1){
        return dp[n];
    }
    for(auto i:to_string(n)){
        if(i=='0'){
            continue;
        }
        ans=min(ans,solve(n-(i-'0'))+1);
    }
    return dp[n]= ans;
}
signed main(){
    memset(dp,-1,sizeof dp);
    
    cin >> n;
    cout << solve(n)<< endl;
}

