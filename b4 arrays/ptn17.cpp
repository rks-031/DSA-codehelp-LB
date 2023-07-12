#include <iostream>
using namespace std;

int main()
{
        int n = 4;
        int m = 4;
        for (int j = 1; j <= n; j++)
        {
                for (int i = m; i > 1; i--)
                {
                        cout << " ";
                }
                for (int k = 1; k <= j; k++)
                {
                        cout << "*";
                }
                cout << endl;
                m--;
        }
}