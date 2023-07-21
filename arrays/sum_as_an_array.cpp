#include <bits/stdc++.h>
using namespace std;

// void myReverse(vector<int> &a)
// {
//         int start = 0;
//         int end = a.size() - 1;
//         while (start <= end)
//         {
//                 swap(a[start], a[end]);
//                 start++;
//                 end--;
//         }
// }

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
        int num1 = 0, num2 = 0;
        int i = 0;
        while (i < n)
        {
                num1 += a[i] * pow(10, n - 1 - i);
                i++;
        }

        int j = 0;
        while (j < m)
        {
                num2 += b[j] * pow(10, m - 1 - j);
                j++;
        }

        int sum = num1 + num2;
        vector<int> ans;
        while (sum != 0)
        {
                int digit = sum % 10;
                ans.push_back(digit);
                sum /= 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
}

int main()
{
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
                cin >> b[i];
        }
        vector<int> ans = findArraySum(a, n, b, m);
        for (int i : ans)
        {
                cout << i << " ";
        }

        return 0;
}
