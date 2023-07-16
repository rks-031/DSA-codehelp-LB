#include <bits/stdc++.h>
using namespace std;

int findPeakInMountain(vector<int> &a, int n)
{
        int s = 0;
        int e = a.size() - 1;
        int mid = s + (e - s) / 2;
        int ans;
        while (s <= e)
        {
                // left side of the mountain
                if (a[mid] < a[mid + 1])
                {
                        s = mid + 1;
                }
                // right side
                else
                {
                        e = mid;
                }
                mid = s + (e - s) / 2;
        }
        return s;
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
        cout << findPeakInMountain(a, n);
}