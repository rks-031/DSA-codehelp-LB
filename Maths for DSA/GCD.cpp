#include <bits/stdc++.h>
using namespace std;

// Euclidean algorithm

int GCD(int n1, int n2)
{
        while (n1 != n2)
        {
                if (n1 > n2)
                {
                        return GCD(n1 - n2, n2);
                }
                else if (n2 > n1)
                {
                        return GCD(n2 - n1, n1);
                }
                else
                {
                        return n1;
                }
        }
}
int main()
{
        int n1, n2;
        cin >> n1 >> n2;
        cout << "GCD of " << n1 << " & " << n2 << " is: " << GCD(n1, n2) << endl;
}