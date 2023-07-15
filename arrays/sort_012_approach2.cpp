#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
        vector<int> ans;
        int i = 0, k = 0, j = n - 1;
        while (k <= j)
        {
                if (a[k] == 0)
                {
                        swap(a[i], a[k]);
                        i++;
                        k++;
                }
                else if (a[k] == 1)
                {
                        k++;
                }
                else
                {
                        swap(a[k], a[j]);
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
        sort012(a, n);
        printArray(a, n);
}