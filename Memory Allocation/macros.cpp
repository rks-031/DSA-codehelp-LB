#include <bits/stdc++.h>
using namespace std;

#define pi 3.14
#define min(a, b) (a < b ? a : b)
#define area(r) (pi * r * r)
// by declaring a macro, we don't take any extra storage

int main()
{
        int e;
        cin >> e;
        // double area = pi * e * e;
        // cout << area;
        cout << "area: " << area(e) << endl;

        int a, b;
        cin >> a >> b;
        cout << "minimum value: " << min(a, b) << endl;
}