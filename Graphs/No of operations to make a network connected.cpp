class Solution
{
private:
    void dfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis,
             vector<vector<int>> &connections)
    {
        vis[node] = 1;

        for (auto nbr : adj[node])
        {
            if (!vis[nbr])
            {
                dfs(nbr, adj, vis, connections);
            }
        }
    }

public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        int len = connections.size();

        if (len < n - 1)
            return -1;

        unordered_map<int, list<int>> adj;

        for (int i = 0; i < len; i++)
        {
            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        unordered_map<int, bool> vis;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, connections);
                ans++;
            }
        }

        return ans - 1;
    }
};