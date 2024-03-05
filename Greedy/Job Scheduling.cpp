struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
* /

    class Solution
{
public:
    static bool cmp(Job a, Job b)
    {
        return a.profit > b.profit;
    }
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        sort(arr, arr + n, cmp);

        int maxDead = INT_MIN;

        for (int i = 0; i < n; i++)
            maxDead = max(maxDead, arr[i].dead);

        vector<int> scheduling(maxDead + 1, -1);

        int count = 0, maxProfit = 0;

        for (int i = 0; i < n; i++)
        {
            int currId = arr[i].id;
            int currDead = arr[i].dead;
            int currProfit = arr[i].profit;

            for (int k = currDead; k > 0; k--)
            {
                if (scheduling[k] == -1)
                {
                    count++;
                    maxProfit += currProfit;
                    scheduling[k] = currId;
                    break;
                }
            }
        }

        return {count, maxProfit};
    }
};