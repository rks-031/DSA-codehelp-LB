#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
        //if we'll not give base case, segmentation fault will be encountered
        if (n == 0) // base case
        {
                return 1;
        }
        else
        {
                return n * fact(n - 1);
        }
}
int main()
{
        long long n;
        cin >> n;
        cout << fact(n);
}