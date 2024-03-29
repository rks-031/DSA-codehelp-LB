class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long ans = LLONG_MAX;

        for (int i = 0; i + m - 1 < n; i++)
        {
            long long diff = a[i + m - 1] - a[i];
            ans = min(ans, diff);
        }

        return ans;
    }
};