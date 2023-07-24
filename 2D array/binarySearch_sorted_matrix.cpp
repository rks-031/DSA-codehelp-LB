#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < c; j++)
                {
                        ans.push_back(matrix[i][j]);
                }
        }

        int start = 0;
        int end = ans.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
                if (target == ans[mid])
                {
                        return true;
                }
                else if (target > ans[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
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