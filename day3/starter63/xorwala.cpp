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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int small = v[0];
        int ans = 0;
        int flag =0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            { flag=1;
                int lasto = upper_bound(v.begin(), v.end(), v[i] + 1) - v.begin() - 1;
                if (lasto != n)
                {
                    int z = lasto - i + 1;
                    ans = max(ans, z);
                }
            }
            else{
                 int lasto = upper_bound(v.begin(), v.end(), v[i] ) - v.begin() - 1;
                if (lasto != n)
                {
                    int z = lasto - i + 1;
                    ans = max(ans, z);
                }
            }
        }
        //  int ans1=0;
        // if (ans == 0)
        // { flag =-1;
        //     int cnt=0;
           
        //     for (int i = 0; i < n - 1; i++)
        //     {

        //         if (v[i] == v[i + 1])
        //         {
        //             cnt++;
        //         }
        //         else
        //         {
        //             ans1 = max(ans1, cnt);
        //             cnt = 0;
        //         }
        //     }
        //     // cout << min(n-ans1,ans1) << endl;

        // }
        // if(ans1 !=0 && flag ==-1){
        //     cout << min(n-ans1,ans1) << endl;
        // }
        // else if(flag == 1){
        //     cout << n - ans << endl;
        // }
        // else{
        //     cout << n-1 << endl;
        // }
        cout << n-ans << endl;
    }
    return 0;
}
