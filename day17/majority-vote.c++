//{ Driver Code Starts
// extended moore voting algo
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        int  i,num1=-1,num2=-1,cnt1=0,cnt2=0;
        vector<int>ans;
        for(i=0;i<n;i++){
            if(nums[i]==num1){
                cnt1++;
            }
            else if(nums[i]==num2){
                cnt2++;
            }
            else if(cnt1==0){
                num1=nums[i];
                cnt1=1;
            }
             else if(cnt2==0){
                num2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int count1=0,count2=0;
        for(i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;
            }
           else if(nums[i]==num2){
                count2++;
            }
           
        }
         if(count1>n/3){
                ans.push_back(num1);
            }
        if(count2>n/3){
                ans.push_back(num2);
            }
            if(ans.size()==0){
                ans.push_back(-1);
                return ans;
            }
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
//
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here 
        vector<int>ans;
        int cnt=1;
        sort(nums.begin(),nums.end());
        int flag=1;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second>n/3){
                ans.push_back(it.first);
                flag=0;
            }
        }
        if(flag==1){
            // return -1;
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends