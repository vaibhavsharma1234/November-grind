class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        int sum=0;
        int m=0;
        while(left<right){
            sum=nums[left]+nums[right];
            left++;
            right--;
            m=max(m,sum);
        }
        return m;
    }
};
// res = max(res, nums[i] + nums[nums.size() - i - 1]);