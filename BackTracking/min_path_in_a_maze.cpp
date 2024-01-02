#include <bits/stdc++.h>
using namespace std;

bool isSafe(int newX, int newY, vector<vector<char>> &arr, int n, int m,
            vector<vector<bool>> &visited)
{
    return (newX >= 0 && newX < n) && (newY >= 0 && newY < m) &&
           !visited[newX][newY] && (arr[newX][newY] == '.');
}

void solve(int x, int y, vector<vector<char>> &arr, int n, int m, vector<string> &ans,
           vector<vector<bool>> &visited, string path)
{

    int destX = -1, destY = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'T')
            {
                destX = i;
                destY = j;
            }
        }
    }

    // base case
    if (x == destX && y == destY)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = true;

    // 4 movements (D, L, R, U)

    // down
    if (isSafe(x + 1, y, arr, n, m, visited))
    {
        solve(x + 1, y, arr, n, m, ans, visited, path + 'D');
    }

    // left
    if (isSafe(x, y - 1, arr, n, m, visited))
    {
        solve(x, y - 1, arr, n, m, ans, visited, path + 'L');
    }

    // right
    if (isSafe(x, y + 1, arr, n, m, visited))
    {
        solve(x, y + 1, arr, n, m, ans, visited, path + 'R');
    }

    // up
    if (isSafe(x - 1, y, arr, n, m, visited))
    {
        solve(x - 1, y, arr, n, m, ans, visited, path + 'U');
    }

    visited[x][y] = false;
}

vector<string> findPath(vector<vector<char>> &arr, int n, int m)
{
    vector<string> ans;

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    int srcX = -1, srcY = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'S')
            {
                srcX = i;
                srcY = j;
            }
        }
    }

    string path = "";

    solve(srcX, srcY, arr, n, m, ans, visited, path);

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<string> ans = findPath(arr, n, m);

    int minLen = INT_MAX;

    for (auto i : ans)
    {
        minLen = min(static_cast<int>(i.length()), minLen);
    }

    if (minLen == INT_MAX)
    {
        cout << "DOOMED";
    }
    else
    {
        cout << minLen;
    }
    return 0;
}
