class Solution
{
public:
    int solve(vector<int> &nums, int i, int n, bool taken, vector<vector<int>> &dp)
    {
        if (i >= n)
            return 0;
        if (n == 1)
            return nums[0];

        if (dp[i][taken] != -1)
            return dp[i][taken];

        if (i == n - 1)
        {
            if (taken == false)
                return nums[i];
            else
                return 0;
        }

        int ex = 0 + solve(nums, i + 1, n, taken, dp);
        int in = nums[i] + solve(nums, i + 2, n, taken, dp);

        if (i == 0)
            in = nums[i] + solve(nums, i + 2, n, true, dp);

        int ans = max(in, ex);
        return dp[i][taken] = ans;
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solve(nums, 0, n, false, dp);
    }
};