#include <bits/stdc++.h>
using namespace std;
int main()
{
        cout << "enter a number";
        int n;
        cin >> n;
        if (n == 2)
        {
                cout << "prime";
        }
        else
        {
                for (int i = 2; i < n; i++)
                {
                        if (n % i == 0)
                        {
                                cout << "Not prime";
                        }
                }
                cout << n << " is prime";
        }
}
