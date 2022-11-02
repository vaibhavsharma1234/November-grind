// #include <bits/stdc++.h>
// using namespace std;
// wrong 
// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int ans = 0;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         int cnt = 0;
//         int flag = 0;
//         for (int i = 0; i < n - 1; i++)
//         {

//             if (arr[i] == arr[i + 1])
//             {
//                 cnt++;
//             }
//             else
//             {
//                 ans = max(ans, cnt);
//                 cnt = 0;
//             }
//             if ((arr[i + 1] - arr[i]) == 1)
//             {
//                 flag = 1;
//             }
//         }

//         ans = max(ans, cnt);
//         if (ans > 0)
//         {
//             ans++;
//         }
//         int v = ans;
//         int b = n - v;
//         int cnt2 = 0;
//         int ans2=0;
//         if (v == 0 && flag == 1)
//         {
//             for (int i = 0; i < n - 1; i++)
//             {
//                 if(arr[i]^arr[j] <=1){
//                     cnt2++;
//                 }
//                 else{
//                     ans2=max(ans2,cnt2);
//                 }
//             }
//             ans2=max(ans2,cnt2);
//         }
//         int ans1 = min(v, b);
//         if (v == 0 && flag == 0)
//         {
//             cout << n << endl;
//         }
//         else if (v == 0 && flag == 1)
//         {
//             cout << n-ans2+1 << endl;
//         }

//         else if (v != 0)
//         {
//             cout << min(v, n - v) << endl;
//         }
//         else
//         {
//             cout << n - 2 << endl;
//         }
//     }
//     return 0;
// }
