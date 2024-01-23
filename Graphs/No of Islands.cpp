class Solution
{
public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid, int m, int n)
    {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        vector<int> rItr = {-1, 0, 1, 0};
        vector<int> cItr = {0, 1, 0, -1};

        while (!q.empty())
        {
            int curRow = q.front().first;
            int curCol = q.front().second;
            q.pop(); // Move the pop outside the inner loop

            for (int i = 0; i < 4; i++)
            {
                int nrow = curRow + rItr[i];
                int ncol = curCol + cItr[i];

                if ((nrow >= 0 && nrow < n) && (ncol >= 0 && ncol < m) && (!vis[nrow][ncol]) &&
                    (grid[nrow][ncol] == '1'))
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (!vis[row][col] && grid[row][col] == '1')
                {
                    count++;
                    bfs(row, col, vis, grid, m, n);
                }
            }
        }
        return count;
    }
};