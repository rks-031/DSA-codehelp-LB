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

        // s=0;
        // while(s<e){
        //     int currArea  = min(height[s], height[e]) * (e-s);
        //     area.push_back(currArea);
        //     e--;
        // }

        // for(int i=1;i<n;i++){
        //     int currArea = min(height[i], height[i-1])*1;
        //     area.push_back(currArea);
        // }

        // for(int i=0;i<area.size();i++) maxArea = max(maxArea, area[i]);

        return maxArea;
    }
};