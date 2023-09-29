#include <bits/stdc++.h>
int maximumNonAdjacentSum(vector<int> &nums)
{
        int incl = 0, excl = 0;
        for (int i = 0; i < nums.size(); i++)
        {
                int new_incl = excl + nums[i];
                excl = max(incl, excl);
                incl = new_incl;
        }

        return max(incl, excl);
}