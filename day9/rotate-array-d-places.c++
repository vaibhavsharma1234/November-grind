class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp(k);
        int n = nums.size();
        if (n == 0)
            return;
        k = k % n;
        if (k > n)
            return;
        for (int i = nums.size() - k, j = 0; i < nums.size(); i++)
        {
            temp[j] = nums[i];
            j++;
        }
        for (int i = nums.size() - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};
// reversal algo se bhi ho skti hai