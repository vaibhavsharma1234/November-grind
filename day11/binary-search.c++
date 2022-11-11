//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int binarys(int arr[], int low, int high,int x){
        
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    int low =0,high=N-1;
    int x=K;
     while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                return 1;
            }
           else if(arr[mid]<x){
                low=mid+1;
            }
           else if(arr[mid]>x){
                high=mid-1;
            }
        }
        return -1;
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends
// vector<int> v