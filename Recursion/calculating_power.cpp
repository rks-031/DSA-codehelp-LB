#include <bits/stdc++.h>
using namespace std;

int calculatePower(int x, int n)
{
        if (n == 0)
        {
                return 1;
        }
        int ans = calculatePower(x, n / 2);
        // even
        if (n % 2 == 0)
        {
                return ans * ans;
        }
        else
        {
                return x * ans * ans;
        }
}

int main()
{
        int x, n;
        cin >> x >> n;
        cout << calculatePower(x, n);
}