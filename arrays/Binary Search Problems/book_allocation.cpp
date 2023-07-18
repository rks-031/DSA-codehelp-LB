#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> arr, int n, int m, int mid)
{
        int pageSum = 0;
        int studentCount = 1;
        for (int i = 0; i < n; i++)
        {
                if (pageSum + arr[i] <= mid)
                {
                        pageSum += arr[i];
                }
                else
                {
                        studentCount++;
                        if (studentCount > m || arr[i] > mid)
                        {
                                return false;
                        }
                        pageSum = arr[i];
                }
        }
        return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
        int s = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum += arr[i];
        }
        int e = sum;
        int mid = s + (e - s) / 2;
        int ans;
        while (s <= e)
        {
                if (isPossibleSoln(arr, n, m, mid))
                {
                        ans = mid;
                        e = mid - 1;
                }
                else
                {
                        s = mid + 1;
                }
                mid = s + (e - s) / 2;
        }
        return ans;
}

int main()
{
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        cout << "Maximum number of pages assigned to a student such that it is minimum is:" << allocateBooks(arr, n, m);
}