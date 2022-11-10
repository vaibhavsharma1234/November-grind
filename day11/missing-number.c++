class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t =*max_element(nums.begin(),nums.end());
        if(t==nums.size()-1){
            return t+1;
        }
     int sum=   accumulate(nums.begin(),nums.end(),0);
        int sum1=(t*(t+1))/2;
        int ans= abs(sum-sum1);
        return ans;
    }
};