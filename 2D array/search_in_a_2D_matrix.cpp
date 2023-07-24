#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
        
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