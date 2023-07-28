#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
        if (n == 1 || n == 0)
        {
                return;
        }
        else
                for (int i = 1; i < n; i++)
                {
                        {
                                if (arr[0] > arr[1])
                                {
                                        swap(arr[0], arr[1]);
                                }
                                bubbleSort(arr + 1, n - 1);
                        }
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
        bubbleSort(arr, n);
        cout << "Sorted array:" << endl;
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}