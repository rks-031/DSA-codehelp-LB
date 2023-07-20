#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
        for (int i = 1; i < n; i++)
        {
                bool swapped = false; // code optimized
                for (int j = 0; j < n - i; j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                swap(arr[j], arr[j + 1]);
                                swapped = true;
                        }
                }
                if (swapped == false)
                {
                        break;
                }
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
        cout << "Sorted array: " << endl;
        bubbleSort(arr, n);
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}
