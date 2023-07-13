#include <bits/stdc++.h>
using namespace std;

int findUnique(int a[], int size)
{
        int unique = 0;
        for (int i = 0; i < size; i++)
        {
                unique ^= a[i];
        }
        return unique;
}

int main()
{

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                int size;
                cin >> size;
                int a[size];
                for (int i = 0; i < size; i++)
                {
                        cin >> a[i];
                }
                cout << findUnique(a, size) << endl;
        }
}