class Solution
{
public:
    void bfs(vector<int> &ans, unordered_map<int, bool> &visited, vector<int> adj[], int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            ans.push_back(frontNode);

            // traverse kro
            for (auto i : adj[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }

    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> ans;
        unordered_map<int, bool> visited;

        bfs(ans, visited, adj, 0);

        return ans;
    }
};