#include <bits/stdc++.h>
using namespace std;

void sort01(int a[], int n)
{
        int i = 0, j = n - 1;
        while (i <= j)
        {
                while (a[i] == 0 && i <= j)
                {
                        i++;
                }
                while (a[j] == 1 && i <= j)
                {
                        j--;
                }
                if (a[i] == 1 && a[j] == 0 && i <= j)
                {
                        swap(a[i], a[j]);
                        i++;
                        j--;
                }
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
        // enter only 0's and 1's
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        sort01(a, n);
        printArray(a, n);
}