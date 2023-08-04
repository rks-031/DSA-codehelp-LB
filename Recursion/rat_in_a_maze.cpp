#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> m)
{
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
        {
                return true;
        }
        else
        {
                return false;
        }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<int>> &visited, int x, int y, string path)
{
        if (x == n - 1 && y == n - 1)
        {
                ans.push_back(path);
                return;
        }

        visited[x][y] = 1;
        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
                path.push_back('D');
                solve(m, n, ans, visited, newx, newy, path);
                path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
                path.push_back('U');
                solve(m, n, ans, visited, newx, newy, path);
                path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m))
        {
                path.push_back('R');
                solve(m, n, ans, visited, newx, newy, path);
                path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m))
        {
                path.push_back('L');
                solve(m, n, ans, visited, newx, newy, path);
                path.pop_back();
        }

        visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
        vector<string> ans;
        if (m[0][0] == 0)
        {
                return ans;
        }
        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        solve(m, n, ans, visited, srcx, srcy, path);
        sort(ans.begin(), ans.end());
        return ans;
}

int main()
{
        int n;
        cout << "Enter the size of the maze (n x n): ";
        cin >> n;

        vector<vector<int>> maze(n, vector<int>(n));
        cout << "Enter the maze (0s and 1s):\n";
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)
                {
                        cin >> maze[i][j];
                }
        }

        vector<string> paths = findPath(maze, n);
        if (paths.empty())
        {
                cout << "No path exists to reach the destination (bottom-right corner).\n";
        }
        else
        {
                cout << "All possible paths to reach the destination:\n";
                for (const string &path : paths)
                {
                        cout << path << "\n";
                }
        }

        return 0;
}
