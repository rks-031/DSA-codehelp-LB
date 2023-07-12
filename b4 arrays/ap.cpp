#include <iostream>
using namespace std;

int nTerm(int n)
{
        return 3 * n + 7;
}

int main()
{
        int n;
        cin >> n;
        cout << nTerm(n) << endl;
}