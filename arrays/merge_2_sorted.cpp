#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
        int i = m - 1;     // Index for nums1
        int j = n - 1;     // Index for nums2
        int k = m + n - 1; // Index for the merged array (nums1)

        while (i >= 0 && j >= 0)
        {
                if (nums1[i] >= nums2[j])
                {
                        nums1[k] = nums1[i];
                        i--;
                }
                else
                {
                        nums1[k] = nums2[j];
                        j--;
                }
                k--;
        }

        // If there are remaining elements in nums2, copy them to nums1
        while (j >= 0)
        {
                nums1[k] = nums2[j];
                k--;
                j--;
        }
}
int main()
{
        int m, n;
        cin >> m >> n;
        vector<int> nums1(m + n);
        vector<int> nums2(n);
        for (int i = 0; i < m + n; i++)
        {
                cin >> nums1[i];
        }
        for (int i = 0; i < n; i++)
        {
                cin >> nums2[i];
        }
        cout << "After merging:" << endl;
        merge(nums1, m, nums2, n);
        for (int i = 0; i < m + n; i++)
        {
                cout << nums1[i] << " ";
        }
}