#include <bits/stdc++.h>

int solve(vector<int> &weight, vector<int> &value, int index, int capacity,
          vector<vector<int>> &dp)
{
    // base case
    // only 1 element
    if (index == 0)
    {
        if (weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }

    if (dp[index][capacity] != -1)
        return dp[index][capacity];

    int incl = 0;
    //   int ans;

    if (weight[index] <= capacity)
    {
        incl = value[index] +
               solve(weight, value, index - 1, capacity - weight[index], dp);
    }
    int excl = 0 + solve(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(incl, excl);

    return dp[index][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    // Write your code here
    //   return solve(weight, value, n - 1, maxWeight);
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    return solve(weight, value, n - 1, maxWeight, dp);
}