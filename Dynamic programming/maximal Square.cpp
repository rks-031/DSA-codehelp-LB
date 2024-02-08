// User function Template for C++

class Solution
{
public:
    int solve(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp, int n, int m)
    {
        if (i >= mat.size() || j >= mat[0].size())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int d = solve(mat, i + 1, j + 1, maxi, dp, n, m);
        int r = solve(mat, i, j + 1, maxi, dp, n, m);
        int b = solve(mat, i + 1, j, maxi, dp, n, m);

        if (mat[i][j] == 1)
        {
            int ans = 1 + min(r, min(d, b));
            maxi = max(ans, maxi);
            return dp[i][j] = ans;
        }
        else
        {
            return dp[i][j] = 0;
        }
    }

    int maxSquare(int n, int m, vector<vector<int>> &mat)
    {
        int maxi = 0;
        vector<vector<int>> dp(n, vector<int>(m, -1)); // Corrected declaration of dp
        solve(mat, 0, 0, maxi, dp, n, m);
        return maxi;
    }
};