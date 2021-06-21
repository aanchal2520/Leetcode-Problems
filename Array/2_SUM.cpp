// Problem name : 2 SUM
// link to question -> https://leetcode.com/problems/two-sum/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        for (int i = 0, j = nums.size() - 1; i < j;)
        {
            if (nums[i] + nums[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
            else if (nums[i] + nums[j] < target)
                i++;
            else if (nums[i] + nums[j] > target)
                j--;
        }

        return answer;
    }
};