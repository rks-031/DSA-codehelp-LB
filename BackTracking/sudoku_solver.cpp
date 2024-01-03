#include <bits/stdc++.h>

bool isSafe(int row, int col, vector<vector<int>> &board, int val)
{
    for (int i = 0; i < board.size(); i++)
    {
        if (board[row][i] == val)
            return false;
        if (board[i][col] == val)
            return false;
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>> &board)
{
    int n = board[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check cell empty
            if (board[i][j] == 0)
            {
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(i, j, board, val))
                    {
                        board[i][j] = val;

                        bool nextPossible = solve(board);

                        if (nextPossible)
                        {
                            return true;
                        }
                        else
                        {
                            // backtrack
                            board[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>> &sudoku) { solve(sudoku); }