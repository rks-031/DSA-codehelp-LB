class Solution
{
public:
    int solve(vector<int> &obs, int currlane, int pos, vector<vector<int>> &dp)
    {
        // base case
        int n = obs.size() - 1;
        if (pos == n)
            return 0;

        if (dp[currlane][pos] != -1)
            return dp[currlane][pos];

        if (obs[pos + 1] != currlane)
            return solve(obs, currlane, pos + 1, dp);
        else
        {
            int ans = INT_MAX;
            for (int i = 1; i <= 3; i++)
            {
                // jis lane pe jump krna h wo currlane na ho and uspe obstacle na pada ho
                if (currlane != i && obs[pos] != i)
                {
                    ans = min(ans, 1 + solve(obs, i, pos, dp));
                }
            }
            return dp[currlane][pos] = ans;
        }
    }
    int minSideJumps(vector<int> &obstacles)
    {
        int n = obstacles.size();
        vector<vector<int>> dp(4, vector<int>(n, -1));
        return solve(obstacles, 2, 0, dp);
    }
};