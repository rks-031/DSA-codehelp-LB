#include <bits/stdc++.h>

using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    long long currentSum = 0;
    long long maxSum = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum = max((long long)arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
