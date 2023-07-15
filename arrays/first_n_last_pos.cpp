#include <bits/stdc++.h>
using namespace std;

// time complexity: O(logn)

int firstOccurence(vector<int> &a, int n, int key)
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

int lastOccurence(vector<int> &a, int n, int key)
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
pair<int, int> firstAndLastOccurence(vector<int> &arr, int n, int k)
{
        pair<int, int> p;
        p.first = firstOccurence(arr, n, k);
        p.second = lastOccurence(arr, n, k);
        return p;
}

int main()
{
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        int key;
        cin >> key;
        pair<int, int> result = firstAndLastOccurence(a, n, key);
        cout << result.first << " " << result.second << endl;
}