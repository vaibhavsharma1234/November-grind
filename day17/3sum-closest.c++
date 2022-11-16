//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
        int clos=0;
        int minval=INT_MAX;
        sort(A,A+N);
        int targ=X;
        for(int i=0;i<N-1;i++ ){
            int left=i+1;
            int right=N-1;
            // int 
            // int targ=X-A[i];
        
            while(left<right){
                int sum=A[left]+A[right]+A[i];
                
                if(abs(X-sum)<minval){
                    clos=sum;
                    minval=(abs(X-sum));
                }
                
                if(sum<=targ){
                    // clos=min(clos,(targ-sum));
                    left++;
                }
                if(sum>targ){
                    // clos=min(clos,(targ-sum));
                    right--;
                }
            }
        }
        return clos;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends