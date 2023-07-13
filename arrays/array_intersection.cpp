#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int a[], int b[], int n1, int n2)
{
        int i, j;
        vector<int> ans;
        for (i = 0; i < n1; i++)
        {
                for (j = 0; j < n2; j++)
                {
                        if (a[i] == b[j])
                        {
                                ans.push_back(b[j]);
                                b[j] = INT_MIN;
                                break;
                        }
                }
        }
        return ans;
}

int main()
{
        int n1, n2;
        cin >> n1 >> n2;
        int a[n1], b[n2];
        for (int i = 0; i < n1; i++)
        {
                cin >> a[i];
        }
        for (int i = 0; i < n2; i++)
        {
                cin >> b[i];
        }
        vector<int> ans = findIntersection(a, b, n1, n2);
        for (int i = 0; i < ans.size(); i++)
        {
                cout << ans[i] << " ";
        }
        return 0;
}