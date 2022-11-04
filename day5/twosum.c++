class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>jj;
        int flag =0;
        for(int i =0;i<nums.size();i++){
            int ans = target-nums[i];
            for(int j = 0;j<nums.size();j++){
                if(nums[j] == ans && j != i){
                    jj.push_back(i);
                    jj.push_back(j);
                    flag =1;
                   break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        return jj;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])){
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                return res;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return res;
    }
};