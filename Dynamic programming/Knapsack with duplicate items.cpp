class Solution
{
public:
    int solve(int val[], int wt[], int index, int W, vector<vector<int>> &dp)
    {
        if (index < 0 || W == 0) // Base case: if no more items or knapsack capacity is 0
            return 0;

        if (dp[index][W] != -1)
            return dp[index][W];

        int incl = 0;

        if (wt[index] <= W)
        {
            incl = val[index] + solve(val, wt, index, W - wt[index], dp);
        }

        int excl = solve(val, wt, index - 1, W, dp);

        dp[index][W] = max(incl, excl);

        return dp[index][W];
    }

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N, vector<int>(W + 1, -1));
        return solve(val, wt, N - 1, W, dp);
    }
};