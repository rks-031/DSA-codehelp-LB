#include <bits/stdc++.h>

int solve(vector<int> &num, int tar, vector<int> &dp)
{
    if (tar < 0)
        return 0;

    if (tar == 0)
        return 1;
    // dp[1] = 1;

    int ans = 0;

    if (dp[tar] != -1)
        return dp[tar];

    for (int i = 0; i < num.size(); i++)
    {
        ans += solve(num, tar - num[i], dp);
    }

    return dp[tar] = ans;
}

int findWays(vector<int> &num, int tar)
{
    vector<int> dp(tar + 1, -1);
    return solve(num, tar, dp);
}