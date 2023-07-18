#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
        for (int i = 0; i < n - 1; i++)
        {
                int minimum = i;
                for (int j = i + 1; j < n; j++)
                {
                        if (arr[j] < arr[minimum])
                                minimum = j;
                }
                swap(arr[i], arr[minimum]);
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
        selectionSort(arr, n);
        cout << "Sorted array: " << endl;
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}