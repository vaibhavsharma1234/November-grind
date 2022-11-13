class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int pi=0;
        int ni=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[pi]=nums[i];
                pi+=2;
            }
            else{
                res[ni]=nums[i];
                ni+=2;
            }
        }
        return res;
    }
};

//
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>e,o;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
        }
        int i=0,j=0;
        vector<int>res;
        for(int k=0;k<nums.size();k++){
            if(k%2==0){
                res.push_back(e[i]);
                i++;
            }
            else{
                res.push_back(o[j]);
                j++;
            }
        }
        return res;
    }
};
//
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>e,o;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            e.push_back(arr[i]);
	        }
	        else{
	            o.push_back(arr[i]);
	        }
	    }
	    int cntp=e.size();
	    int cntn=o.size();
	    int i=0;
	    int k=0,l=0;
	    while(cntp>0&& cntn>0 && i<n){
	        if(i%2==0){
	            arr[i]=e[k];
	            cntp--;
	            k++;
	        }
	        else{
	            arr[i]=o[l];
	            l++;
	            cntn--;
	        }
	        i++;
	    }
	    while(cntp>0){
	        arr[i]=e[k];
	        k++;
	        cntp--;
	        i++;
	    }
	     while(cntn>0){
	        arr[i]=o[l];
	        l++;
	        i++;
	        cntn--;
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends