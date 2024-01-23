// Given a weighted, directed and connected graph of V vertices and E edges, Find the shortest distance of all the vertex 's from the source vertex S. If a vertices can' t be reach from the S then mark the distance as 10 ^ 8. Note : If the Graph contains a negative cycle then return an array consisting of only - 1.

class Solution
{
public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   S: source vertex to start traversing graph with
     *   V: number of vertices
     */
    vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
    {
        // Code here
        vector<int> dist(V, 1e8);
        int src = S;

        dist[src] = 0;
        int n = V;

        for (int i = 0; i < n - 1; i++)
        {
            for (auto it : edges)
            {
                int u = it[0];
                int v = it[1];
                int w = it[2];

                if (dist[u] != 1e8 && (dist[u] + w < dist[v]))
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
        // checking negative cycle
        //  vector<int> check;
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            if (dist[u] != 1e8 && dist[u] + w < dist[v])
            {
                // check.push_back(-1); return check;
                return {-1};
            }
        }

        return dist;
    }
};