class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        if(nums2.size()==0){
            
        }
        else{
            for(int i=0;i<m+n;i++){

             if(nums1[i]>nums2[j] && i<m){
                // swap(nums1[i],nums2[j]);
                int temp=nums2[j];
                nums2[j]=nums1[i];
                nums1[i]=temp;
                 sort(nums2.begin(),nums2.end());
                
            }
            else if(i>=m){
                // swap(nums1[i],nums2[j]);
                 int temp=nums2[j];
                nums2[j]=nums1[i];
                nums1[i]=temp;
                j++;
                // sort(nums2.begin(),nums2.end());
            }
        }
        }
        
        // return nums1
    }
};
// dono array sorted the isly peeche se start[pada]
// 3 pointers us ekiye
//https://leetcode.com/problems/merge-sorted-array/discuss/1661668/Multiple-C%2B%2B-solution-with-full-explanation
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};