#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=2;;i++)
		{
			if(__gcd(n-i-1,i)==1)
			{
				cout<<n-i-1<<" "<<i<<" "<<1<<endl;
				break;
			}
		}
	}
}
// cin>>tc;
//     int T=tc;
//     while(tc--)
//     { 
//         int n;
//         cin>>n;
//         int a,b,c;
//         c=1;
//         n-=1;
 
//         if(n%2==1)
//         {
//             a=n/2;
//             b=a+1;
//         }
//         else if(n%4==0){
//             a=n/2;
//             b=a+1;
//             a-=1;
//         }
//         else{
//             a=n/2;
//             b=a+2;
//             a-=2;
//         }
 
//         cout<<a<<" "<<b<<" "<<c<<endl;
 
        
//     }