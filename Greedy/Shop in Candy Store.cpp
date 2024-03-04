class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies + N);

        int mini = 0, buy = 0, free = N - 1;

        while (buy <= free)
            mini += candies[buy];
        buy++;
        free -= K;

        int maxi = 0;
        buy = N - 1, free = 0;

        while (free <= buy)
            maxi += candies[buy];
        buy--;
        free += K;

        return {mini, maxi};
    }
};