#include <bits/stdc++.h>
using namespace std;

void largestRowSum(int arr[][3], int r, int c)
{
        int maxi = -1;
        for (int i = 0; i < r; i++)
        {
                int sum = 0;
                for (int j = 0; j < c; j++)
                {
                        sum += arr[i][j];
                        maxi = max(maxi, sum);
                }
                cout << "Row " << i + 1 << " sum: " << sum << endl;
        }
        cout << "Largest Row Sum: " << maxi << endl;
}

int main()
{
        // int r, c;
        // cin >> r >> c;
        int arr[3][3];
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        cin >> arr[i][j];
                }
        }
        largestRowSum(arr, 3, 3);
}