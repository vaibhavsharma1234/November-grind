#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char x;
        string s;
        // we make string as s+s so that cyclic can be handled and we start from back so that rightmost g se subract kr sake because humko har c ke liye in s we want rightmost g yeh tha crux of question u  needed to understand
        // question ne kya pucha hai s,mjho use
        cin >> n >> x;
        cin >> s;
        int ans=0;
        int last =0;
        s=s+s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='g'){
                last =i;
                break;

            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] =='g'){
                last =i;
            }
            if(s[i] == x){
                ans=max(ans,last-i);
            }
            
        }
        cout << ans << endl;
    }
}
// another soln
void HareKrishna(){
  ll n;
  cin >> n;
  char c;
  cin >> c;
  string s;
  cin >> s;
  v a;
  v b;
  for(ll i=0; i<n; i++){
    if(s[i] == c){
      a.pb(i);
    }
    if(s[i] == 'g'){
      b.pb(i);
    }
  }
  ll ans = 0;
 
  for(auto &j : a){
    auto temp = lower_bound(b.begin(), b.end(), j) - b.begin();
    if(temp != b.size()){
      ans = max(ans, b[temp] - j);
    }
    else{
      ans = max(n - j + b[0], ans);
    }
  }
  cout << ans << endl;
}