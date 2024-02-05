class Solution
{
private:
    int solve(int n, vector<int> &days, vector<int> &costs, vector<int> &dp, int index)
    {
        if (index >= n)
        {
            return 0;
        }

        if (dp[index] != -1)
            return dp[index];

        // day-1 pass
        int op1 = costs[0] + solve(n, days, costs, dp, index + 1);

        int i;
        // day-7 pass
        for (i = index; i < n && days[i] < days[index] + 7; i++)
            ;
        int op2 = costs[1] + solve(n, days, costs, dp, i);

        // day-30 pass
        for (i = index; i < n && days[i] < days[index] + 30; i++)
            ;
        int op3 = costs[2] + solve(n, days, costs, dp, i);

        return dp[index] = min(op1, min(op2, op3));
    }

public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        vector<int> dp(n + 1, -1);
        return solve(n, days, costs, dp, 0);
    }
};