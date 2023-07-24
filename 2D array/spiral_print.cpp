#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
        vector<int> ans;
        int r = matrix.size();
        int c = matrix[0].size();

        // index initialization
        int startingRow = 0;
        int endingRow = r - 1;
        int startingCol = 0;
        int endingCol = c - 1;

        int count = 0;
        int total = r * c;

        while (count < total)
        {
                // printing 1st row
                for (int i = startingCol; count < total && i <= endingCol; i++)
                {
                        ans.push_back(matrix[startingRow][i]);
                        count++;
                }
                startingRow++;

                // printing last col
                for (int i = startingRow; count < total && i <= endingRow; i++)
                {
                        ans.push_back(matrix[i][endingCol]);
                        count++;
                }
                endingCol--;

                // printing last row
                for (int i = endingCol; count < total && i >=startingCol; i--)
                {
                        ans.push_back(matrix[endingRow][i]);
                        count++;
                }
                endingRow--;

                // printing 1st col
                for (int i = endingRow; count < total && i >= startingRow; i--)
                {
                        ans.push_back(matrix[i][startingCol]);
                        count++;
                }
                startingCol++;
        }
        return ans;
}