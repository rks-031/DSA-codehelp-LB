#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int n, int target)
{
        if (n == 0)
        {
                return false;
        }
        if (arr[0] == target)
        {
                return true;
        }
        else
        {
                linearSearch(arr + 1, n - 1, target);
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
        int target;
        cin >> target;
        bool value = linearSearch(arr, n, target);
        value == 1 ? cout << "Found" : cout << "Not found";
}