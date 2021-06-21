//link to question -> https://leetcode.com/problems/remove-element/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
        // auto last = std::remove(nums.begin(), nums.end(), val);
        // return std::distance(nums.begin(), last);
    }
};