class Solution
{
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        vector<pair<int, int>> arr(m.begin(), m.end());

        sort(arr.begin(), arr.end(), cmp);

        for (auto it : arr)
        {
            if (k != 0)
            {
                ans.push_back(it.first);
            }
            else
                break;
            k--;
        }
        return ans;
    }
};