#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n)
{
        if (n == 0 || n == 1)
                return true;

        if (arr[0] > arr[1])
                return false;
        else
        {
                bool remainingPart = isSorted(arr + 1, n - 1);
                return remainingPart;
        }
}

int main()
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        bool value = isSorted(arr, n);
        value == 1 ? cout << "Sorted" : cout << "Not sorted";
}