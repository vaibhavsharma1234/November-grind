//{ Driver Code Starts
#include <bits/stdc++.h>
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int low=0,high=N-2;
	    while(low<=high){
	        int mid =(low+high)>>1;
	        if(A[mid]==A[mid^1]){
	            low=mid+1;
	            // shhrink the left half
	        }
	        else{
	            high=mid-1;
	        }
	    }
	    return A[low];
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends
//
using namespace std;
// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=0;i<N;i++){
	        if(i==0  ){
	           // continue;
	           if(A[i]==A[i+1]){
	               continue;
	           }
	           else{
	               return A[i];
	           }
	        }
	        else if(i==N-1 && A[i]==A[i-1]){
	           if(A[i]==A[i-1]){
	               continue;
	           }
	           else{
	               return A[i];
	           }
	        }
	         else if(A[i]==A[i+1] || A[i]==A[i-1]){
	            continue;
	        }
	        else{
	            return A[i];
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends