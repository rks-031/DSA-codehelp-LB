#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][4], int r, int c)
{
        for (int i = 0; i < r; i++)
        {
                int sum = 0;
                for (int j = 0; j < c; j++)
                {
                        sum += arr[i][j];
                }
                cout << "Row " << i + 1 << " sum: " << sum << endl;
        }
}

int main()
{
        // int r, c;
        // cin >> r >> c;
        int arr[3][4];
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 4; j++)
                {
                        cin >> arr[i][j];
                }
        }
        rowSum(arr, 3, 4);
}