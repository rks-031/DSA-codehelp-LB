#include <bits/stdc++.h>

int getKthLargest(vector<int> &arr, int k)
{
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
                int sum = 0;
                for (int j = i; j < arr.size(); j++)
                {
                        sum += arr[j];
                        ans.push_back(sum);
                }
        }

        sort(ans.begin(), ans.end());

        return ans[ans.size() - k];
}
