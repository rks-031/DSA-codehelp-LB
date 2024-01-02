#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isSafe(int row, int col, vector<vector<int>> board, int n)
    {
        int x = row, y = col;

        // col

        while (y >= 0)
        {
            if (board[x][y] == 1)
            {
                return false;
            }
            y--;
        }

        x = row;
        y = col;

        // upper diagonal

        while (x >= 0 && y >= 0)
        {
            if (board[x][y] == 1)
            {
                return false;
            }
            x--;
            y--;
        }

        x = row;
        y = col;

        // lower diagonal

        while (x < n && y >= 0)
        {
            if (board[x][y] == 1)
            {
                return false;
            }
            x++;
            y--;
        }

        return true;
    }

    void addSoln(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
    {
        vector<int> temp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(board[i][j]);
            }
        }

        ans.push_back(temp);
    }

    void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
    {
        // base case
        if (col == n)
        {
            addSoln(board, ans, n);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row][col] = 1;
                solve(col + 1, board, ans, n);
                board[row][col] = 0;
            }
        }
    }

public:
    vector<vector<int>> nQueen(int n)
    {
        // code here
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<int>> ans;

        solve(0, board, ans, n);

        vector<vector<int>> res;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                if (ans[i][j] == 1)
                {
                    temp.push_back(j + 1);
                }
            }
            res.push_back(temp);
        }

        return res;
    }
};

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution obj;
    vector<vector<int>> result = obj.nQueen(n);

    if (result.empty())
    {
        cout << "No solutions found." << endl;
    }
    else
    {
        cout << "Solutions:" << endl;
        for (auto &solution : result)
        {
            cout << "[ ";
            for (int i : solution)
            {
                cout << i << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}
