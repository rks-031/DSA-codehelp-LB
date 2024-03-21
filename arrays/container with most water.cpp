class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        vector<int> area;
        int n = height.size();
        int s = 0;
        int e = n - 1;

        while (s < e)
        {
            int currArea = min(height[s], height[e]) * (e - s);
            maxArea = max(maxArea, currArea);
            // s++;

            if (height[s] < height[e])
                s++;
            else
                e--;
        }
        return maxArea;
    }
};