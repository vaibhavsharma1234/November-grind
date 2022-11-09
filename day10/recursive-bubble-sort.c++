//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int i=l;// starting index ofleft
         int j=m+1;// of right
         int f=l;
         int temp[100005];
         while(i<=m && j<=r){
             if(arr[i]<arr[j]){
                 temp[f]=arr[i];
                 i++;
             }
             else{
                 temp[f]=arr[j];
                 j++;
             }
             f++;
         }
         if(i>m){
             while(j<=r){
                 temp[f]=arr[j];
                 j++;
                 f++;
                 
             }
         }
         else{
             while(i<=m){
                 temp[f]=arr[i];
                 i++;
                 f++;
             }
         }
         for(int k=l;k<=r;k++){
             arr[k]=temp[k];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
            int m = (l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends