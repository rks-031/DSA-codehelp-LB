class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        // code here
        int sundays = S / 7;
        int buyingDays = S - sundays;
        int totalFood = S * M;
        int ans = 0;
        if ((S * M) % N == 0)
            ans = (S * M) / N;
        else
            ans = (S * M) / N + 1;
        if (ans <= buyingDays)
            return ans;
        else
            return -1;
    }
};
