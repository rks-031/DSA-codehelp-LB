class Solution
{
public:
    int isNegativeWeightCycle(int n, vector<vector<int>> edges)
    {
        // Code here
        vector<int> dist(n, INT_MAX);

        dist[0] = 0;

        for (int i = 0; i < n; i++)
        {

            for (auto it : edges)
            {
                int u = it[0];
                int v = it[1];
                int w = it[2];

                if (dist[u] != INT_MAX && (dist[u] + w < dist[v]))
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            if (dist[u] + w < dist[v])
                return 1;
        }

        return 0;
    }
};

// algo:
1. dist vector banao n size ka and initialize each element with INFINITY 2. dist[src] = 0;
3. for n-1 times do the relaxation: if dist[u] + w < dist[v] => then dist[v] = dist[u] + w;
4. do relaxation one last time : if dist[u] + w<dist[v] => then cycle present;
5. else cycle not present