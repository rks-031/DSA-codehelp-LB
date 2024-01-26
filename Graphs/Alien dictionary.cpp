#include <vector>
#include <unordered_map>
#include <list>
#include <stack>

using namespace std;

class Solution
{
private:
    void topoSort(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis,
                  stack<int> &s)
    {
        vis[node] = true;

        for (auto nbr : adj[node])
        {
            if (!vis[nbr])
            {
                topoSort(nbr, adj, vis, s);
            }
        }
        s.push(node);
    }

public:
    string findOrder(string dict[], int N, int K)
    {
        string str;
        unordered_map<int, list<int>> adj;

        for (int i = 0; i < N - 1; i++)
        {
            string s1 = dict[i];
            string s2 = dict[i + 1];

            int l1 = s1.length();
            int l2 = s2.length();

            int len = min(l1, l2);

            for (int j = 0; j < len; j++)
            {
                if (s1[j] != s2[j])
                {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
            }
        }

        unordered_map<int, bool> vis;
        stack<int> s;

        for (int i = 0; i < K; i++)
        {
            if (!vis[i])
            {
                topoSort(i, adj, vis, s);
            }
        }

        while (!s.empty())
        {
            str.push_back(s.top() + 'a');
            s.pop();
        }

        return str;
    }
};
