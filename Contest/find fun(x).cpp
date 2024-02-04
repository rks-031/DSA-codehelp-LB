#define MOD 1000000007
class Solution
{
private:
    int add(int a, int b)
    {
        return ((a % MOD) + (b % MOD)) % MOD;
    }

    int mul(int a, int b)
    {
        return ((a % MOD) * 1LL * (b % MOD)) % MOD;
    }

    int solve(int n, vector<int> &dp)
    {
        if (n == 0)
            return 2;
        if (n == 1)
            return 5;
        if (n == 2)
            return 9;
        if (n == 3)
            return 7;

        int ans = 0;

        if (dp[n] != -1)
            return dp[n];

        if (n >= 4 && n % 2 == 0)
        {
            ans = add(mul(solve(n - 2, dp), (n - 2)), mul(solve(n - 4, dp), (n - 4))) % MOD;
        }

        if (n >= 4 && n % 2 != 0)
        {
            ans = add(mul(solve(n - 1, dp), (n - 1)), mul(solve(n - 3, dp), (n - 3))) % MOD;
        }

        return dp[n] = ans;
    }

public:
    int findFun(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};