#include <bits/stdc++.h>
using namespace std;

int findPower(int a, int b)
{
        return pow(a, b);
}
int main()
{
        int base, exp;
        cin >> base >> exp;
        cout << findPower(base, exp);
        return 0;
}