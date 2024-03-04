class Solution
{
public:
    static bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
    {
        if (a.second.second != b.second.second) // If end times are different, sort by end time
            return a.second.second < b.second.second;
        else // If end times are the same, sort by start time
            return a.second.first < b.second.first;
    }
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F)
    {
        vector<int> ans;
        vector<pair<int, pair<int, int>>> v;

        for (int i = 0; i < N; i++)
        {
            v.push_back({i + 1, {S[i], F[i]}});
        }

        sort(v.begin(), v.end(), cmp);

        // int count =1;
        ans.push_back(v[0].first);
        int ansEnd = v[0].second.second;

        for (int i = 1; i < N; i++)
        {
            if (v[i].second.first > ansEnd)
            {
                ans.push_back(v[i].first);
                ansEnd = v[i].second.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};