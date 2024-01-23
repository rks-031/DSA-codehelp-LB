class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set<pair<int, int>> st;
        st.insert({0, S});

        vector<int> dist(V, INT_MAX);
        dist[S] = 0;

        while (!st.empty())
        {
            auto it = *(st.begin());
            int u = it.second;
            int dis = it.first;
            st.erase(it);

            for (auto it : adj[u])
            {
                int v = it[0];
                int w = it[1];

                if (dis + w < dist[v])
                {
                    if (dist[v] != INT_MAX)
                        st.erase({dist[v], v});
                    dist[v] = dis + w;
                    st.insert({dist[v], v});
                }
            }
        }

        return dist;
    }
};