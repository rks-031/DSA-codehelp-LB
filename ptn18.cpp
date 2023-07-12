#include <iostream>
using namespace std;

int main()
{
        int n = 4, m = 4;
        for (int i = 1; i <= n; i++)
        {
                for (int j = m; j >= 1; j--)
                {
                        cout << "* ";
                }
                m--;
                for (int k = 1; k <= i; k++)
                {
                        cout << " ";
                }
                cout << endl;
        }
}