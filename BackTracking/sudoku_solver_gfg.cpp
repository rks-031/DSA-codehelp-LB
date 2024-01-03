//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define UNASSIGNED 0
const int n = 9;
class Solution
{
public:
    bool isSafe(int row, int col, int grid[n][n], int val)
    {
        // int n= grid[0].size();
        for (int i = 0; i < n; i++)
        {
            if (grid[row][i] == val)
                return false;
            if (grid[i][col] == val)
                return false;
            if (grid[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
                return false;
        }
        return true;
    }

    // Function to find a solved Sudoku.
    bool SolveSudoku(int grid[N][N])
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                // Cell is empty
                if (grid[i][j] == 0)
                {
                    for (int val = 1; val <= 9; val++)
                    {
                        if (isSafe(i, j, grid, val))
                        {
                            grid[i][j] = val;

                            // Recursion
                            bool nextPossible = SolveSudoku(grid);
                            if (nextPossible)
                                return true;
                            else
                                grid[i][j] = 0;
                        }
                    }
                    // No valid value found for this cell
                    return false;
                }
            }
        }
        // Sudoku solved
        return true;
    }

    // Function to print grids of the Sudoku.
    void printGrid(int grid[N][N])
    {
        // Your code here
        // int n=N;
        if (SolveSudoku(grid))
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << grid[i][j] << " ";
                }
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int grid[N][N];

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> grid[i][j];

        Solution ob;

        if (ob.SolveSudoku(grid) == true)
            ob.printGrid(grid);
        else
            cout << "No solution exists";

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends