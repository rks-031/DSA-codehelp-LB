#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
        vector<int> temp(nums.size());
        k = nums.size() - k;
        for (int i = 0; i < nums.size(); i++)
        {
                int j = ((i + k) % nums.size());
                temp[j] = nums[i];
        }
        nums = temp;
}

int main()
{
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
                cin >> n;
        }
        rotate(nums, k);
        cout << "Updated array after rotating the elements to " << k << " places:" << endl;
        for (int i = 0; i < n; i++)
        {
                cout << nums[i] << " ";
        }
}