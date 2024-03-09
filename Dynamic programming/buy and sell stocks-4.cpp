class Solution
{
public:
    int solve(int i, int buy, int limit, vector<int> &prices, vector<vector<vector<int>>> &dp)
    {
        if (i == prices.size() || limit == 0)
            return 0;

        if (dp[i][buy][limit] != -1)
            return dp[i][buy][limit];

        int profit = 0;
        if (buy)
        {
            profit = max((-prices[i] + solve(i + 1, 0, limit, prices, dp)),
                         (0 + solve(i + 1, 1, limit, prices, dp)));
        }
        else
        {
            profit = max((prices[i] + solve(i + 1, 1, limit - 1, prices, dp)),
                         (0 + solve(i + 1, 0, limit, prices, dp)));
        }
        return dp[i][buy][limit] = profit;
    }
    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return solve(0, 1, k, prices, dp);
    }
};