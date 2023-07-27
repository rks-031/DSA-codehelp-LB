#include <bits/stdc++.h>
using namespace std;

int sumElements(int *arr, int n)
{
        // base case
        if (n == 0)
        {
                return 0;
        }
        // recursive step
        return arr[0] + sumElements(arr + 1, n - 1);
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
        cout << sumElements(arr, n);
}