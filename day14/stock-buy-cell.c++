//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int buy=0;
    int i;
    int flag =0;
    for( i=0;i<n-1;i++){
         
        if(price[i]<price[i+1] && buy==0){
            cout << "(" << i<< " ";
            buy=1;
            flag=1;
        }
        else if(price[i]>price[i+1] && buy==1){
            cout << i << ")" << " ";
            buy=0;
        }
    }
    if(flag==0){
        cout << "No Profit" ;
    }
    else if(buy==1){
         cout << i << ")" << " ";
    }
    
    cout << endl;
}