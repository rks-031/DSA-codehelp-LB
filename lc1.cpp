#include <iostream>
using namespace std;

int main()
{
        // int nod;
        // cin >> nod;
        int n;
        cin >> n;
        int sum = 0;
        int prod = 1;
        while (n != 0)
        {
                int d = n % 10;
                sum += d;
                prod *= d;
                n /= 10;
        }
        cout << sum << endl;
        cout << prod << endl;
        cout << prod - sum << endl;
}