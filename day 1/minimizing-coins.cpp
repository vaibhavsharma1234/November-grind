// question 2
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
const int MOD = 1e9 +7;
const int INF = LLONG_MAX >> 1;
int arr[105];
int target;
int n1;
int ans=0;
int cnt=0;
int solve(int n){
    // if(ans == target){
    //     cnt++;
    // }
    if(n==0){
        return 1;
    }
    if(n<0){return 0;}
    
    for(int i=0;i<n1;i++){
        ans+=solve(n-arr[i]);
    }
    return ans;
}


signed main(){
    
    cin >> n1 >> target;
    for(int i=0;i<n1;i++){
        cin >> arr[i];
    }
    cout << solve(target) << endl;

}


