#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
        int i = 0, j = 0;
        while (i < nums.size())
        {
                if (nums[i] == 0)
                {
                        i++;
                }
                else
                {
                        swap(nums[i], nums[j]);
                        i++;
                        j++;
                }
        }
}
int main()
{
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
                cin >> n;
        }
        moveZeroes(nums);
        cout << "Updated array after moving all the zeroes to the right:" << endl;
        for (auto i : nums)
        {
                cout << i << " ";
        }
}