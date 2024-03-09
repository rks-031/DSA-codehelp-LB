class Solution
{
public:
    int solve(int i, int buy, vector<int> &prices, int limit, vector<vector<vector<int>>> &dp)
    {
        if (i == prices.size() || limit == 0)
            return 0;

        if (dp[i][buy][limit] != -1)
            return dp[i][buy][limit];

        int profit = 0;
        if (buy)
        {
            profit = max((-prices[i] + solve(i + 1, 0, prices, limit, dp)),
                         (0 + solve(i + 1, 1, prices, limit, dp)));
        }
        else
        {
            profit = max((prices[i] + solve(i + 1, 1, prices, limit - 1, dp)),
                         (0 + solve(i + 1, 0, prices, limit, dp)));
        }
        return dp[i][buy][limit] = profit;
    }
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, 1, prices, 2, dp);
    }
};