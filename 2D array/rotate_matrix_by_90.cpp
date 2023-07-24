#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
        int r = matrix.size();
        int c = r;
        // transpose of the matrix
        for (int i = 0; i < r; i++)
        {
                for (int j = i + 1; j < c; j++)
                {
                        swap(matrix[i][j], matrix[j][i]);
                }
        }

        // reversing each row of the matrix
        for (int i = 0; i < r; i++)
        {
                int start = 0;
                int end = c - 1;
                while (start <= end)
                {
                        swap(matrix[i][start++], matrix[i][end--]);
                }
        }
}

int main()
{
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < c; j++)
                {
                        cin >> matrix[i][j];
                }
        }

        rotate(matrix);

        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < c; j++)
                {
                        cout << matrix[i][j] << " ";
                }
        }
}