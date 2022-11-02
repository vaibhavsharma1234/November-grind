// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         int z=0,o=0;
//         int ans=0;
//         for(int i=0;i<n;i++){
//             cin >> arr[i];
//             if(arr[i]==0){
//                 z++;
//             }
//             else{
//                 o++;
//             }
//         }
//         ans = min(o,z);
//         o = max(0,o-z);
//         ans+=o/3;
//         cout << ans << endl;
//     }
// }
// now stack metthod
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int ans=0;
        int n;
        cin >> n;
        stack<int> s;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(s.empty()){
                //means 0 ya 1 ka pair bnaga so 
                s.push(x);

            }
            else{
                if(s.top()!=x){
                     //means 0 ya 1 ka pair bnaga so 
                     ans++;
                     s.pop();
                }
                else{
                    s.push(x);
                }
            }
        }
        // now by till here all0 and 1 pair will be gone 
        //  and is stack is still not empty like if there are 1 left in stack 
        while(s.size()>=2){
        // here if we get same element toh push 0 as same ka xor is zero
        int temp = s.top();
        s.pop();
        if(temp == s.top()){
            
            s.pop();
            s.push(0);// xor push krdiya
        }
        else{
            // here we get 0 and 1 
            ans++;
            s.pop();
        }
        }
        cout << ans << endl;
    }
    
}