#include <bits/stdc++.h>
using namespace std;

// we consider pivot as the index of the minimum element
/*
        3
       /
  9   2
 / \ /
7   1<----pivot
*/
int getPivot(int a[], int n)
{
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {

                // if pivot is on line 1
                if (a[mid] >= a[0])
                {
                        s = mid + 1;
                }
                // if pivot is on line 2
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        cout << "Pivot is: " << getPivot(a, n);
}