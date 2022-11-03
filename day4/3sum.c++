// sort the array , negative the arr[i] into target find the sum of two elements =target
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int target =-nums[i];
            int left =i+1;// because sare soln aage milage previous wala all be included 
            int right=n-1;
            while(left<right){
                int sum =nums[left]+nums[right];
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    vector<int> triplet ={nums[i],nums[left],nums[right]};
                    ans.push_back(triplet);
                    while(left<right && nums[left]==triplet[1])left++;
                    while(left<right && nums[right]==triplet[2])right--;
                }
            }
            while(i+1<nums.size()&& nums[i+1]==nums[i]){
                i++;
            }
            
        }
        return ans;
    }
};