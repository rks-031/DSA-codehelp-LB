#include <bits/stdc++.h>
#define M 1000000007
long long int solve(int n, vector<long long int> &dp)
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    long long int ans = ((n - 1) % M * (solve(n - 1, dp) % M + solve(n - 2, dp) % M)) % M;
    return dp[n] = ans;
}

long long int countDerangements(int n)
{
    vector<long long int> dp(n + 1, -1);
    return solve(n, dp);
}