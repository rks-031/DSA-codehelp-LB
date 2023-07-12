#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n = 4;
        for (int i = 1; i <= n; i++)
        {
                // int value = i;
                for (int j = i; j < 2 * i; j++)
                {
                        // cout << value << " ";
                        // value++;
                        cout << j << " ";
                }
                cout << endl;
        }
}