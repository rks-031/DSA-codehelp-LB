#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n, int i)
{

        if (i == n - 1) // entire array traversed
        {
                return;
        }

        int min_index = i;
        for (int j = i + 1; i < n; j++)
        {
                if (arr[i] <= arr[min_index])
                        min_index = j;
        }
        swap(arr[i], arr[min_index]);
        selectionSort(arr, n - 1, i + 1);
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
        selectionSort(arr, n, 0);
        cout << "Sorted array: " << endl;
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}