class Solution {
public:
    bool check(vector<int>& nums) {
        // pura array ma only ek jagah arr[i]> arr[i+1]
        for(int i=0,k=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()] && ++k>1){
                return false;
            }
        }
        return true;
    }
};