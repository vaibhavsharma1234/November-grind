#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int cnt=0;
        int flag =0;
        if(n==1){
            cout << "yes"<< endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i] =='1'){
                    cnt++;
                }
                else if(s[i]=='0' && cnt%2 ==0){
                    cnt=0;
                }
                else{
                    flag =1;
                    break;
                }
            }
            if(cnt%2==0)
            cout << "yes"<< endl;
            else{
                cout <<"no"<< endl;
            }
        }
       
            
        
        
    }
    return 0;
}
