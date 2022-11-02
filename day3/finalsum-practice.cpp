#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin  >> n >> q;
        int sum=0;
        // int arr[n];
        for(int i=0;i<n;i++){
            int y;
            cin >> y;
            sum+=y;
        }
        for(int i=1;i<=q;i++){
            int q1,q2;
            cin >> q1>> q2;
            int z = q2-q1 +1;
            if(z%2!=0){
                sum++;
            }
        }
        cout << sum << endl;
    }
}