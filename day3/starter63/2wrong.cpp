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
//         string s;
//         cin >> n;
//         cin >> s;
//         int cnt0 = 0, cnt1 = 0;
//         int p0 = 0, p1 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             // int a=s[i]-'0';
//             // int b=s[i+1]-'0';
//             int a1 = s[i] - '0';
//             // int b2=s[i+1]-'0';
//             // if(a==b && a==0){
//             //     cnt0++;

//             // }
//             // if(a==b && a==1){
//             //     cnt1++;

//             // }
//             if (a1 == 0)
//             {
//                 p0++;
//             }
//             if (a1 == 1)
//             {
//                 p1++;
//             }
//         }
//         for (int i = 1; i < n; i++)
//         {
//             if (s[i] == s[i - 1])
//             {
//                 if (s[i] == '0')
//                 {
//                     cnt0++;
//                     i += 1;
//                 }
//                 else
//                 {
//                     cnt1++;
//                     i += 1;
//                 }
//             }
//         }
//         if (n == 1)
//         {
//             cout << "yes" << endl;
//         }
//         else if (n == 2)
//         {
//             if (s[0] == s[1])
//             {
//                 cout << "yes" << endl;
//             }
//             else
//             {
//                 cout << "no" << endl;
//             }
//         }
//         else
//         {
//             if (n % 2 == 0)
//             {
//                 int ui = cnt0 + cnt1;
//                 if (2 * ui == (n))
//                 {
//                     cout << "yes" << endl;
//                 }
//                 else
//                 {
//                     cout << "no" << endl;
//                 }
//             }
//             else
//             {
//                 int xy = 2*cnt0+2*cnt1+(p0-2*cnt0);
//                 if (p1 == n || p0 == n)
//                 {
//                     cout << "yes" << endl;
//                 }
//                 else if(xy == n)
//                 {
//                     cout << "yes"<< endl;
//                 }
//                 else {
//                     cout << "no"<< endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }
