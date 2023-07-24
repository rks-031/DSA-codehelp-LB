#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
        int r = matrix.size();
        int c = matrix[0].size();

        int rowIndex = 0;
        int colIndex = c - 1;

        while (rowIndex < r && colIndex >= 0)
        {
                int element = matrix[rowIndex][colIndex];

                if (element == target)
                {
                        return true;
                }
                else if (element > target) // dusre row me hoga then element
                {
                        colIndex--;
                }
                else // piche wale columns me hoga
                {
                        rowIndex++;
                }
        }
        return false;
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

        int target;
        cin >> target;

        bool value = searchMatrix(matrix, target);
        value == 0 ? cout << "False" : cout << "True";
}