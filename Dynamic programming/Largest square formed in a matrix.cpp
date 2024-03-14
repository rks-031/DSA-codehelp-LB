class Solution
{
public:
    int solve(vector<vector<int>> &mat, int n, int m, int i, int j, vector<vector<int>> &dp, int &maxi)
    {
        if (i < 0 or i >= n or j < 0 or j >= m)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int right = solve(mat, n, m, i, j + 1, dp, maxi);
        int bottom = solve(mat, n, m, i + 1, j, dp, maxi);
        int diagonal = solve(mat, n, m, i + 1, j + 1, dp, maxi);

        // int max=0;
        if (mat[i][j] == 1)
        {
            int ans = 1 + min({right, bottom, diagonal});
            maxi = max(ans, maxi);
            return dp[i][j] = ans;
        }
        else
            return dp[i][j] = 0;
    }
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        // code here
        // int ans = 0;
        vector<vector<int>> dp(n, vector<int>(m + 1, -1));
        int maxi = 0;
        solve(mat, n, m, 0, 0, dp, maxi);
        return maxi;
    }
};