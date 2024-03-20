class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int maxLen = 1;
        int currLen = 1;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        if (n == 0)
            return 0;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i - 1] + 1 == nums[i])
                {
                    currLen++;
                }
                else
                {
                    maxLen = max(maxLen, currLen);
                    currLen = 1;
                }
            }
        }
        return max(maxLen, currLen);
    }
};