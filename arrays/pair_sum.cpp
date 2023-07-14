#include <bits/stdc++.h>
using namespace std;

// each pair should be sorted

vector<vector<int>> findPair(int a[], int n, int sum)
{
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
                for (int j = i + 1; j < n; j++)
                {
                        if ((a[i] + a[j] == sum))
                        {
                                vector<int> temp;
                                temp.push_back(min(a[i], a[j]));
                                temp.push_back(max(a[i], a[j]));
                                ans.push_back(temp);
                        }
                }
        }
        sort(ans.begin(), ans.end());
        return ans;
}

int main()
{
        int n;
        int sum;
        cin >> n >> sum;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        vector<vector<int>> ans = findPair(a, n, sum);
        for (int i = 0; i < ans.size(); i++)
        {
                cout << ans[i][0] << " " << ans[i][1] << endl;
        }
}