long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    unordered_map<int, long long> m;

    long long s = 0, e = 0, j = 0;

    while (s < n)
    {
        while (e < n)
        {
            long long sum = 0;
            for (int i = s; i <= e; i++)
            {
                sum += arr[i];
            }
            m[j++] = sum;
            e++;
        }
        s++;
        e = s;
    }

    long long ans = INT_MIN;

    for (auto i : m)
    {
        ans = max(ans, i.second);
    }

    return ans;
}