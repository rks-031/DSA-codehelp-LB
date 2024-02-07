#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    int solve(int cost[], int index, int W, vector<vector<int>> &dp)
    {
        // Base case
        if (index < 0)
        {
            if (W == 0)
                return 0; // Successfully bought exactly W kgs of oranges
            else
                return -1; // Not possible to buy exactly W kgs of oranges
        }

        // Check if already calculated
        if (dp[index][W] != -1)
            return dp[index][W];

        // Include the current packet
        int incl = -1;
        if (cost[index] != -1 && index + 1 <= W)
        {
            int next = solve(cost, index, W - (index + 1), dp);
            if (next != -1)
                incl = cost[index] + next;
        }

        // Exclude the current packet
        int excl = solve(cost, index - 1, W, dp);

        // Choose minimum of including and excluding the current packet
        if (incl == -1)
            dp[index][W] = excl;
        else if (excl == -1)
            dp[index][W] = incl;
        else
            dp[index][W] = min(incl, excl);

        return dp[index][W];
    }

public:
    int minimumCost(int cost[], int N, int W)
    {
        vector<vector<int>> dp(N, vector<int>(W + 1, -1));
        return solve(cost, N - 1, W, dp);
    }
};
