class Solution
{
public:
    /*bool isSafe(int newX, int newY, vector<vector<int>> &grid, int n, vector<vector<bool>> &visited) {
        return (newX >= 0 && newX < n) && (newY >= 0 && newY < n) && !visited[newX][newY] && grid[newX][newY] != 0;
    }*/

    int solve(int x, int y, vector<vector<int>> &grid, int n, vector<vector<bool>> &visited,
              int &currentCoins)
    {
        // base case
        if (x < 0 || x >= n || y < 0 || y >= n || grid[x][y] == 0)
        {
            return;
        }

        if (visited[x][y] == true)
            return;
        // currentCoins += grid[x][y];
        // int currentCoins = 0;

        visited[x][y] = true;
        // right
        currentCoins = max(currentCoins, solve(x, y + 1, grid, n, visited, currentCoins));

        // down
        currentCoins = max(currentCoins, solve(x + 1, y, grid, n, visited, currentCoins));

        // left
        currentCoins = max(currentCoins, solve(x, y - 1, grid, n, visited, currentCoins));

        // up
        currentCoins = max(currentCoins, solve(x - 1, y, grid, n, visited, currentCoins));

        currentCoins += grid[x][y];
        visited[x][y] = false;

        // return currentCoins + grid[x][y];
    }

    int maximumCoins(int N, vector<vector<int>> &grid)
    {
        int n = N;
        int ans = 0;

        vector<vector<bool>> visited(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 != 0)
                {
                    // int currentCoins = 0;
                    solve(i, j, grid, n, visited,ans));
                }
            }
        }

        return ans;
    }
};