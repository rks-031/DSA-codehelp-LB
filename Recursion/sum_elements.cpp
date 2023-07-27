#include <bits/stdc++.h>
using namespace std;

int sumElements(int *arr, int n)
{
        // base case
        if (n == 0)
        {
                return 0;
        }
        if (n == 1)
        {
                return arr[0];
        }
        // recursive step
        else
        {
                int remainingPart = sumElements(arr + 1, n - 1);
                int sum = arr[0] + remainingPart;
                return sum;
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
        cout << sumElements(arr, n);
}