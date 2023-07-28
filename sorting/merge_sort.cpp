#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
        int mid = s + (e - s) / 2;
        int l1 = mid - s + 1;
        int l2 = e - mid;
        int *first = new int[l1];
        int *second = new int[l2];

        // copy values
        int k = s;
        for (int i = 0; i < l1; i++)
        {
                first[i] = arr[k++];
        }
        int m = mid + 1;
        for (int i = 0; i < l2; i++)
        {
                second[i] = arr[m++];
        }

        // merge
        int index1 = 0;
        int index2 = 0;
        int minArrayIndex = s;

        while (index1 < l1 && index2 < l2)
        {
                if (first[index1] < second[index2])
                {
                        arr[minArrayIndex++] = first[index1++];
                }
                else
                {
                        arr[minArrayIndex++] = second[index2++];
                }
        }
        while (index1 < l1)
        {
                arr[minArrayIndex++] = first[index1++];
        }
        while (index2 < l2)
        {
                arr[minArrayIndex++] = second[index2++];
        }
}

void mergeSort(int *arr, int s, int e)
{
        if (s >= e)
                return;
        int mid = s + (e - s) / 2;
        // left part
        mergeSort(arr, s, mid);
        // right part
        mergeSort(arr, mid + 1, e);
        // merging
        merge(arr, s, e);
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
        mergeSort(arr, 0, n - 1);
        cout << "Sorted array:" << endl;
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}