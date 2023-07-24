#include <bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][4], int r, int c)
{
        for (int j = 0; j < c; j++)
        {
                if (j % 2 != 0)
                {
                        for (int i = r - 1; i >= 0; i--)
                        {
                                cout << arr[i][j] << " ";
                        }
                }
                else
                {
                        for (int i = 0; i < r; i++)
                        {
                                cout << arr[i][j] << " ";
                        }
                }
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
        wavePrint(arr, 3, 4);
}