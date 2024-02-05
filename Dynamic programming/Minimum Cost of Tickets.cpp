#include <bits/stdc++.h>

int solve(int n, vector<int> days, vector<int> cost, int index, vector<int> &dp)
{
    // base case
    if (index >= n)
    {
        return 0;
    }

    if (dp[index] != -1)
        return dp[index];

    // 1 day pass
    int op1 = cost[0] + solve(n, days, cost, index + 1, dp);

    // 7 days pass
    int i;
    for (i = index; i < n && days[i] < days[index] + 7; i++)
        ;

    int op2 = cost[1] + solve(n, days, cost, i, dp);

    // 30 days pass
    for (i = index; i < n && days[i] < days[index] + 30; i++)
        ;

    int op3 = cost[2] + solve(n, days, cost, i, dp);

    return dp[index] = min(op1, min(op2, op3));
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    vector<int> dp(n + 1, -1);
    return solve(n, days, cost, 0, dp);
}