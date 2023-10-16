#include <bits/stdc++.h>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
        vector<int> ans;
        int r = kArrays.size(); // Number of arrays

        // Merge all arrays into a single vector
        for (int i = 0; i < r; i++)
        {
                int c = kArrays[i].size(); // Number of elements in each array
                for (int j = 0; j < c; j++)
                {
                        ans.push_back(kArrays[i][j]);
                }
        }

        // Use merge sort to sort the merged array
        sort(ans.begin(), ans.end());

        return ans;
}
