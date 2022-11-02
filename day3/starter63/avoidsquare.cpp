#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int left =  n;
	    int right =1;
	    int k=n;
	    int flag=0;
	    while(k){
	       // if(flag ==0){
	       //     cout << left<< " ";
	       //     left--;
	       //     flag=1;
	       // }
	       // else{
	       //     cout << right<< " ";
	       //     right++;
	       //     flag=0;
	       // }
	       cout << k << " ";
	        k--;
	    }
	    cout << endl;
	}
	return 0;
}
