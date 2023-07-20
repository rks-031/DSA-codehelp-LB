#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
        for (int i = 1; i < n; i++)
        {
                int temp = arr[i];
                int j = i - 1;
                // for (; j >= 0; j--)
                // {
                //         if (arr[j] > temp)
                //         {
                //                 arr[j + 1] = arr[j];
                //         }
                //         else
                //         {
                //                 break;
                //         }
                // }
                while (j >= 0)
                {
                        if (arr[j] > temp)
                        {
                                arr[j + 1] = arr[j];
                        }
                        else
                        {
                                break;
                        }
                        j--;
                }
                arr[j + 1] = temp;
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
        insertionSort(arr, n);
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}