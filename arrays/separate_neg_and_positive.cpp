#include <bits/stdc++.h>
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
        int j = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
                if (nums[i] < 0)
                {
                        if (i != j)
                                swap(nums[i], nums[j]);
                        j++;
                }
        }

        return nums;
}