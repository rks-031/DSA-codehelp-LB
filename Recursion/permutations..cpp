#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums)
{
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        do
        {
                output.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return output;
}
int main()
{
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
                cin >> nums[i];
        }

        vector<vector<int>> result = permute(nums);

        for (const auto &permutation : result)
        {
                cout << "{ ";
                for (const auto &i : permutation)
                {
                        cout << i << " ";
                }
                cout << "}" << endl;
        }

        return 0;
}