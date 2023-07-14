#include <bits/stdc++.h>
using namespace std;

vector<int> sort012(int a[], int n)
{
        vector<int> ans;
        int n0 = 0, n1 = 0, n2 = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] == 0)
                        n0++;
                else if (a[i] == 1)
                        n1++;
                else
                        n2++;
        }
        int index = 0;
        // writing 0's
        for (int i = 0; i < n0; i++)
        {
                ans.push_back(0);
                index++;
        }
        for (int i = 0; i < n1; i++)
        {
                ans.push_back(1);
                index++;
        }
        for (int i = 0; i < n2; i++)
        {
                ans.push_back(2);
                index++;
        }

        return ans;
}
int main()
{
        int n;
        cin >> n;
        int a[n];
        // enter only 0's and 1's and 2's
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        vector<int> result = sort012(a, n);
        for (int i = 0; i < result.size(); i++)
        {
                cout << result[i] << " ";
        }
}