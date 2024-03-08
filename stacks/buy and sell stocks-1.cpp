class Solution
{
public:
    int solve(vector<int> &prices, vector<int> &dp, int n)
    {
        int mini = prices[0];
        int profit = 0;

        if (dp[n] != -1)
            return dp[n];

        for (int i = 1; i < n; i++)
        {
            int diff = prices[i] - mini;
            profit = max(profit, diff);
            mini = min(mini, prices[i]);
        }
        return dp[n] = profit;
    }
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> dp(n + 1, -1);
        return solve(prices, dp, n);
    }
};