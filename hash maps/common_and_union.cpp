#include <bits/stdc++.h>
pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m)
{
    // Write Your Code here.
    pair<int, int> result = make_pair(0, 0);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        freq[arr2[i]]++;
    }

    int countCommon = 0;
    int countDistinct = 0;

    for (auto i : freq)
    {
        if (i.second > 1)
            countCommon++;
        countDistinct++;
    }

    result.first = countCommon;
    result.second = countDistinct;

    return result;
}