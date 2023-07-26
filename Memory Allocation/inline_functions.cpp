#include <bits/stdc++.h>
using namespace std;

inline getMax(int &a, int &b)
{
        return (a > b) ? a : b;
}
// inline function: the function call statement gets replaced by the function body itself
// best in use if the bock of code of the function is less than 3 lines.

int main()
{
        int a = 1, b = 2;
        int ans = 0;
        ans = getMax(a, b);
        cout << ans << endl;
        a += 3;
        b += 1;
        ans = getMax(a, b);
        cout << ans << endl;
}