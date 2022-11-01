// #include<bits/stdc++.h>
// using namespace std;
// wrong attempted soln
// int main(){
//     int t,x;
//     cin >> t >> x;
//     int arr[t];
//     for(int i=0;i<t;i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr+t);
//     int left = 0,right =t-1;
//     int sum=0;
//     int team=0;
//     while(left<=right){
//         if(sum >= x){
//             team++;
//             right--;
//         }
//         else{
//             sum+=arr[right];
//             left++;
//         }
        
    
//     }
//     cout << team << endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin >> t >> x;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    int d=0;
    int cnt=0;
    for(int i=0;i<t;i++){
        d+=x/v[i] + 1;
        if(d>t){
            break;
        }
        cnt++;
    }
    cout << cnt << endl;


}