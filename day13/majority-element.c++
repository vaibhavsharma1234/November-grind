//{ Driver Code Starts
//Initial template for C++
// morre voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    long long res=0;
        long long count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[res] == nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count ==0){
                res =i;
                count=1;
            }
        }
        // this first part determines ki major element kon ho  skta hai moore algo
        // second part will ensure ki hai ki nhi
        count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[res]==nums[i]){
                count++;
            }
            // if(count<=nums.size()/2){
            //     res =-1;// indicating no maajor element
            // }
        }
        
        return nums[res];
        
    }
};
//
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
};
//


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int i=0;
        int j=1;
        int cnt=1;
        sort(a,a+size);
        while(j<size){
            if(a[i]==a[j]){
                cnt++;
                j++;
            }
            else{
                if(cnt>(size/2)){
                    return a[i];
                }
                cnt=1;
                i=j;
                j++;
            }
        }
         if(cnt>(size/2)){
                    return a[i];
                }
        return -1;
        // your code here
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends