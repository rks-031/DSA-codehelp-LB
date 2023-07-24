#include <bits/stdc++.h>
using namespace std;

int main()
{
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < c; j++)
                {
                        cin >> arr[i][j];
                }
        }

        int srch;
        cin >> srch;
        int flag = 0;
        int i, j, row, col;
        for (i = 0; i < r; i++)
        {
                for (j = 0; j < c; j++)
                {
                        if (arr[i][j] == srch)
                        {
                                flag == 1;
                                row = i + 1;
                                col = j + 1;
                        }
                }
        }
        if (flag == 0)
        {
                cout << "Not found";
        }
        else
        {
                cout << row << "," << col;
        }
}
