//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int l=1;
      int max1=INT_MIN;
      sort(arr,arr+N);
      for(int i=1;i<N;i++){
          if(arr[i]-arr[i-1]==1){
              l++;
          }
          else if(arr[i]-arr[i-1]==0){
              continue;
          }
          else{
              max1=max(max1,l);
              l=1;
          }
      }
       max1=max(max1,l);
      return max1;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends