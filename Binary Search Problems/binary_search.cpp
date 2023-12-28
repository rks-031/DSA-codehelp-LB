#include <bits/stdc++.h>
using namespace std;

// time complexity: O(logn)

int binarySearch(int a[], int n, int key)
{
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
                if (key == a[mid])
                {
                        return mid;
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
        return -1;
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
        int index = binarySearch(a, n, key);
        if (index == -1)
        {
                cout << key << " absent" << endl;
        }
        else
        {
                cout << key << " is present at index: " << index << endl;
        }
        return 0;
}