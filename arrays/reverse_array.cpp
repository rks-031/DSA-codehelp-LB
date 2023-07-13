#include <bits/stdc++.h>
using namespace std;

void revArray(int a[], int size)
{
        int start = 0;
        int end = size - 1;
        while (start <= end)
        {
                swap(a[start], a[end]);
                start++;
                end--;
        }
}

void printArray(int a[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << a[i] << " ";
        }
}

int main()
{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        cout << "Reversed array" << endl;
        revArray(a, n);
        printArray(a, n);
}