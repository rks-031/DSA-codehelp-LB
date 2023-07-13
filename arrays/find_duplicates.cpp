#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int a[], int size)
{
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
                ans = ans ^ a[i];
        }
        for (int i = 1; i < size; i++)
        {
                ans = ans ^ i;
        }
        return ans;
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
                cout << findDuplicate(a, size) << endl;
        }
}