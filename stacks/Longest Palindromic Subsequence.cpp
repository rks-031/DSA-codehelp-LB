class Solution
{
public:
    int solve(string &a, string &b, int i, int j, vector<vector<int>> &dp)
    {
        if (i == a.length() || j == b.length())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = 0;
        if (a[i] == b[j])
        {
            ans = 1 + solve(a, b, i + 1, j + 1, dp);
        }
        else
        {
            ans = 0 + max(solve(a, b, i + 1, j, dp), solve(a, b, i, j + 1, dp));
        }
        return dp[i][j] = ans;
    }
    int longestPalindromeSubseq(string s)
    {
        string str = s;
        reverse(str.begin(), str.end());
        int n = str.length();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solve(s, str, 0, 0, dp);
    }
};