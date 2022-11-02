#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int cnt=0;
	    for(int i=1;i<s.size();i++){
	        int a = s[i-1]-'0';
	        int b= s[i]-'0';
	        if(a>b){
	            cnt++;
	        }
	    }
	   //  int a = s[s.size()-1]-'0';
	   //     int b= s[s.size()-2]-'0';
	   //     if(b>a && s.size()==2){
	   //         cnt++;
	   //     }
	    cout << cnt << endl;
	}
	return 0;
}
