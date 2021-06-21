//link to question -> https://leetcode.com/problems/maximum-subarray/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_current = nums[0];
        int max_global = nums[0];

        vector<int>::iterator it;
        for (int i = 1; i < nums.size(); i++)
        {
            max_current = std::max(nums[i], nums[i] + max_current);
            if (max_current > max_global)
                max_global = max_current;
        }

        return max_global;
    }
};