#include <bits/stdc++.h>
using namespace std;

template <typename T>

class graph
{
public:
    unordered_map<T, vector<T>> adj; // Fix 1: Use vector<int> instead of vector<vector<int>>

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // create an edge from u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl; // Fix 2: Add a newline after printing each adjacency list
        }
    }
};

int main()
{
    int n;
    cout << "enter the number of nodes: ";
    cin >> n;
    int m;
    cout << "Enter the number of edges: "; // Fix 3: Correct the typo (change > to >>)
    cin >> m;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // print the graph
    g.printAdjList();

    return 0;
}
