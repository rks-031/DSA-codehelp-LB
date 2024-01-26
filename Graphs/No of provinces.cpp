class Solution
{
private:
    void dfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adjList)
    {
        vis[node] = 1;

        for (auto nbr : adjList[node])
        {
            if (!vis[nbr])
            {
                dfs(nbr, vis, adjList);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V)
    {

        unordered_map<int, list<int>> adjList;

        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (adj[i][j] == 1 && i != j)
                {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        unordered_map<int, bool> vis;
        int count = 0;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                count++;
                dfs(i, vis, adjList);
            }
        }

        return count;
    }
};