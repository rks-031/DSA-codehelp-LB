#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int srch, int start, int end)
{
        if (start > end)
        {
                return -1;
        }
        int mid = start + (end - start) / 2;
        if (srch == arr[mid])
        {
                return mid;
        }
        else if (srch > arr[mid])
        {
                return binarySearch(arr, srch, mid + 1, end);
        }
        else if (srch < arr[mid])
        {
                return binarySearch(arr, srch, start, mid - 1);
        }
}

int main()
{
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        int srch;
        cin >> srch;
        int start = 0;
        int end = n - 1;
        cout << binarySearch(arr, srch, start, end);
}