class Solution
{
public:
    int solve(int buy, int i, vector<int> &prices, vector<vector<int>> &dp, int fee)
    {
        if (i == prices.size())
            return 0;

        if (dp[buy][i] != -1)
            return dp[buy][i];

        int profit = 0;
        if (buy == 1)
        {
            int buyStock = -prices[i] + solve(0, i + 1, prices, dp, fee);
            int skip = 0 + solve(1, i + 1, prices, dp, fee);
            profit = max(buyStock, skip);
        }
        else
        {
            int sellStock = +prices[i] + solve(1, i + 1, prices, dp, fee) - fee;
            int skip = 0 + solve(0, i + 1, prices, dp, fee);
            profit = max(sellStock, skip);
        }
        return dp[buy][i] = profit;
    }
    int maxProfit(vector<int> &prices, int fee)
    {
        int n = prices.size();
        vector<vector<int>> dp(2, vector<int>(n, -1));
        return solve(1, 0, prices, dp, fee);
    }
};