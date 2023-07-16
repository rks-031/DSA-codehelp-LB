#include <bits/stdc++.h>
using namespace std;

float binarySearch(int num)
{
        float start = 0;
        float end = num;
        float mid = start + (end - start) / 2;
        float ans;
        while (start <= end)
        {
                if (mid * mid > num)
                {
                        end = mid - 1;
                }
                else if (mid * mid < num)
                {
                        ans = mid;
                        start = mid + 1;
                }
                else
                {
                        return mid;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

float sqRoot(int num)
{
        return binarySearch(num);
}

int main()
{
        int num;
        cin >> num;
        cout << "Sq. root of " << num << " is: " << sqRoot(num);
}