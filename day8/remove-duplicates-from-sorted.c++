// two pointer 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right;
        for(right=1;right<nums.size();right++){
            if(nums[right]!=nums[left]){
                left++;
            }
            nums[left]=nums[right];
        }
        return left+1;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = nums.size();
        int k=0;
        set<int> s;
        for(int i=0;i<x;i++){
            s.insert(nums[i]);
        }
        k =s.size();
        int i=0;
        for(auto it: s){
            nums[i] = it;
            i++;
        }
        return k;
    }
};