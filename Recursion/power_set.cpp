#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
        // base case
        if (index >= nums.size())
        {
                ans.push_back(output);
                return;
        }
        // exclude
        solve(nums, output, index + 1, ans);

        // include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
}

int main()
{
        int n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
                cin >> nums[i];
        }
        cout << "Power Set\n";
        vector<vector<int>> ans = subsets(nums);
        for (const vector<int> &subset : ans)
        {
                for (int num : subset)
                {
                        cout << num << " ";
                }
        }
}