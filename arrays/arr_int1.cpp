#include <bits/stdc++.h>
using namespace std;

// another approach
// we are taking both the arrays as sorted
vector<int> findIntersection(int a[], int b[], int n1, int n2)
{
        vector<int> ans;
        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
                if (a[i] < b[j])
                {
                        i++;
                }
                else if (a[i] == b[j])
                {
                        ans.push_back(a[i]);
                        i++;
                        j++;
                }
                else
                {
                        j++;
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