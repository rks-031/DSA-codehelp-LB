class Solution
{
public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        queue<pair<int, int>> month;
        queue<pair<int, int>> week;

        int ans = 0;

        for (int day : days)
        {
            // remove the expired days
            while (!month.empty() && month.front().first + 30 <= day)
                month.pop();
            while (!week.empty() && week.front().first + 7 <= day)
                week.pop();

            // add cost of current day
            month.push({day, ans + costs[2]});
            week.push({day, ans + costs[1]});

            // update the ans
            ans = min(ans + costs[0], min(week.front().second, month.front().second));
        }

        return ans;
    }
};