#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
        int i = 1;
        int count = 0;
        while (i < nums.size())
        {
                if (nums[i - 1] <= nums[i])
                {
                        i++;
                }
                else
                {
                        count++;
                        i++;
                }
        }
        if (nums[nums.size() - 1] > nums[0])
        {
                count++;
        }
        return count == 1 ? true : false;
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
        bool value = check(nums);
        if (value == 0)
        {
                cout << "false";
        }
        else
        {
                cout << "true";
        }
}