class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v;
        int sum1=0;
        int res=0;
        int minval= INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            int l=i+1;
            int r=n-1;
           int sum=0;
            while(l<r){
                sum = nums[l]+nums[r]+nums[i];
                if(abs(sum-target)<minval){
                     minval=abs(sum-target);
                    res=sum;
                }
                   
                        
                if(sum<=target){
                    l++;
                }
                if(sum>target){
                    r--;
                }
            
            }
           
            
        }
       
        return res;
    }
        
};