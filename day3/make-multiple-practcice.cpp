#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>  t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int z= b-a;
	    if(z<a && z%(a+1)!=0){
	        cout << "no"<<endl;
	    }
	    else if(b%a==0){
	        cout << "yes"<< endl;
	    }
	    else{
	        cout << "yes"<< endl;
	    }
	}
	return 0;
}
