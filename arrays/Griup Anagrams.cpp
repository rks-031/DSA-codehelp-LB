class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;

        for (auto str : strs)
        {
            string s = str;
            sort(s.begin(), s.end());

            if (m.find(s) != m.end())
                m[s].push_back(str); // if mil gya add original string to it's group
            else
                m[s] = {str}; // if nhi mila, create a new group with s as the key
        }

        for (auto i : m)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};