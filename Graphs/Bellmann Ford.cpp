vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges)
{

    // Write your code here.

    vector<int> dist(n + 1, 1e8);

    dist[src] = 0;

    for (int i = 1; i < n; i++)
    {

        for (auto it : edges)
        {

            int u = it[0];

            int v = it[1];

            int wt = it[2];

            if (dist[u] != 1e9 && (dist[u] + wt) < dist[v])
            {

                dist[v] = dist[u] + wt;
            }
        }
    }

    return dist;
}
