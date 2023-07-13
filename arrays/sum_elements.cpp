#include <bits/stdc++.h>
using namespace std;

int sumElements(int a[], int size)
{
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
                sum += a[i];
        }
        return sum;
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
        cout << "Sum of all elements: " << sumElements(a, n);
}