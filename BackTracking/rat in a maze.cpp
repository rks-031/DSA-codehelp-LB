class Solution
{
private:
    bool isSafe(int newX, int newY, vector<vector<int>> &m, int n, vector<vector<bool>> visited)
    {
        if ((newX >= 0 && newX < n) && (newY >= 0 && newY < n) && (visited[newX][newY] != 1) && (m[newX][newY] == 1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void solve(int x, int y, vector<vector<int>> &m, int n, vector<vector<bool>> &visited, vector<string> &ans,
               string path)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // 4 movements (D, L, R, U)
        visited[x][y] = 1;

        // down
        if (isSafe(x + 1, y, m, n, visited))
        {

            solve(x + 1, y, m, n, visited, ans, path + 'D');
        }

        // left
        if (isSafe(x, y - 1, m, n, visited))
        {

            solve(x, y - 1, m, n, visited, ans, path + 'L');
        }

        // right
        if (isSafe(x, y + 1, m, n, visited))
        {

            solve(x, y + 1, m, n, visited, ans, path + 'R');
        }

        // up
        if (isSafe(x - 1, y, m, n, visited))
        {

            solve(x - 1, y, m, n, visited, ans, path + 'U');
        }
        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        if (m[0][0] == 0)
        {
            return ans;
        }

        vector<vector<bool>> visited(n, vector<bool>(n, 0));
        string path = "";

        solve(0, 0, m, n, visited, ans, path);

        return ans;
    }
};