class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        // prefix product
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // suffix product
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // final product
        for (int i = 0; i < nums.size(); i++)
            result[i] = prefix[i] * suffix[i];

        return result;
    }
};