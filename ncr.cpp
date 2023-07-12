#include <iostream>
using namespace std;

int fact(int n)
{
        if (n == 0 || n == 1)
        {
                return 1;
        }
        else
        {
                return n * fact(n - 1);
        }
}

float ncr(int n, int r)
{
        return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
        int n, r;
        cin >> n >> r;
        cout << n << "C" << r << "=" << ncr(n, r);
        return 0;
}