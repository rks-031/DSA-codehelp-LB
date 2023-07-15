#include <bits/stdc++.h>
using namespace std;

// time complexity: O(logn)

int firstOccurence(int a[], int n, int key)
{
        int start = 0;
        int end = n - 1;
        int ans;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
                if (key == a[mid])
                {
                        ans = mid;
                        end = mid - 1;
                }
                else if (key > a[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

int lastOccurence(int a[], int n, int key)
{
        int start = 0;
        int end = n - 1;
        int ans;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
                if (key == a[mid])
                {
                        ans = mid;
                        start = mid + 1;
                }
                else if (key > a[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

int main()
{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        int key;
        cin >> key;
        cout << firstOccurence(a, n, key) << " ";
        cout << lastOccurence(a, n, key);
}