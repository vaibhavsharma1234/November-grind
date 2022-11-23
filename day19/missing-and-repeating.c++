//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
int ans[2];
    int *findTwoElement(int *arr, int n) {
        // code here
        int repeating(0), missing(0);
 
    int i = 0;
 
    // Traverse on the array
    while (i < n)
    {
       
        // If the element is on its correct position
        if (arr[i] == arr[arr[i] - 1])
            i++;
          // If it is not at its correct position 
        // then palce it to its correct position
          else
            swap(arr[i], arr[arr[i] - 1]);
    }
 
    // Find repeating and missing
    for (int i = 0; i < n; i++) {
       
        // If any element is not in its correct position
        if (arr[i] != i + 1) {
            repeating = arr[i];
            missing = i + 1;
            break;
        }
    }
 ans[0]=repeating;
 ans[1]=missing;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends