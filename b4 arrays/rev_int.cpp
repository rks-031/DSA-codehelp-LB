#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;
        // int i = 0;
        int ans = 0;
        while (n != 0)
        {
                int d = n % 10;
                if ((ans < INT_MIN / 10) || (ans > INT_MAX / 10))
                {
                        return 0;
                }
                ans = (ans * 10) + d;
                n = n / 10;
                // i++;
        }
        cout << ans;
}