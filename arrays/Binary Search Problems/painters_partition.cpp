#include <bits/stdc++.h>
using namespace std;

int isPossibleSoln(vector<int> &boards, int n, int k, int mid)
{
        int areaSum = 0;
        int painterCount = 1;
        for (int i = 0; i < n; i++)
        {
                if (areaSum + boards[i] <= mid)
                {
                        areaSum += boards[i];
                }
                else
                {
                        painterCount++;
                        if (painterCount > k || boards[i] > mid)
                        {
                                return false;
                        }
                        areaSum = boards[i];
                }
        }
        return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
        int s = 0;
        int sum = 0;
        int n = boards.size();
        for (int i = 0; i < boards.size(); i++)
        {
                sum += boards[i];
        }
        int e = sum;
        int mid = s + (e - s) / 2;
        int ans;
        while (s <= e)
        {
                if (isPossibleSoln(boards, n, k, mid))
                {
                        ans = mid;
                        e = mid - 1;
                }
                else
                {
                        s = mid + 1;
                }
                mid = s + (e - s) / 2;
        }
        return ans;
}

int main()
{
        int n, k;
        cin >> n >> k;
        vector<int> boards(n);
        for (int i = 0; i < n; i++)
        {
                cin >> boards[i];
        }
        cout << "Area of minimum time to get the painting done: " << findLargestMinDistance(boards, k);
}