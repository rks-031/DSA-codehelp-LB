#include <bits/stdc++.h>
using namespace std;

// first find pivot
// now we've to decide ki target kaahan pr lie krra h
// if a[pivot]<=target<=a[n-1]<----2nd line pe binary search lagayege
// else 1st line pe b.s lagayenge

int getPivot(int a[], int n)
{
        int pivot;
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

int binarySearch(int a[], int n, int s, int e, int target)
{
        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
                if (target == a[mid])
                {
                        return mid;
                }
                else if (target > a[mid])
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

int getTarget(int a[], int n, int target)
{
        int pivot = getPivot(a, n);
        if (a[pivot] <= target && target <= a[n - 1])
        {
                return binarySearch(a, n, pivot, n - 1, target);
        }
        else
        {
                return binarySearch(a, n, 0, pivot - 1, target);
        }
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
        cout << "Index of pivot element: " << getPivot(a, n);
        int target;
        cin >> target;
        cout << "Target element is at index: " << getTarget(a, n, target);
}