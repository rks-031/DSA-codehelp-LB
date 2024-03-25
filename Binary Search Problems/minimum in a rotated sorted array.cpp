class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return -1;
        if (n == 1)
            return nums[0];

        int k = 0; // to find the rotating position
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[i - 1])
            {
                k = i;
                break;
            }
        }
        if (k == 0) // array is not rotated
            return nums[0];
        // cout<<k;

        int mini1 = nums[0];
        int s = 0, e = k - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= mini1)
                e = mid - 1;
            else if (nums[mid] < mini1)
            {
                mini1 = nums[mid];
                s = mid + 1;
            }
        }

        int mini2 = nums[k];
        s = k, e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= mini2)
                e = mid - 1;
            else if (nums[mid] < mini2)
            {
                mini2 = nums[mid];
                s = mid + 1;
            }
        }

        return min(mini1, mini2);
    }
};