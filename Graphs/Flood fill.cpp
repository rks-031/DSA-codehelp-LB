class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>> &image, int color,
             vector<int> delrow, vector<int> delcol, int init)
    {

        ans[row][col] = color;
        int n = ans.size();
        int m = ans[0].size();

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if ((nrow >= 0 && nrow < n) && (ncol >= 0 && ncol < m) && (ans[nrow][ncol] != color) &&
                (image[nrow][ncol] == init))
            {
                dfs(nrow, ncol, ans, image, color, delrow, delcol, init);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int init = image[sr][sc];
        vector<vector<int>> ans = image;

        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, 1, 0, -1};

        dfs(sr, sc, ans, image, color, delrow, delcol, init);

        return ans;
    }
};