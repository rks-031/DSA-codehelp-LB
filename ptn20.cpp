#include <iostream>
using namespace std;

int main()
{
        int n = 4;
        int m = 4;
        for (int i = 1; i <= 4; i++)
        {
                for (int j = 1; j < m; j++)
                {
                        cout << " ";
                }
                for (int k = 1; k <= i; k++)
                {
                        cout << k;
                }
                for (int k = i - 1; k >= 1; k--)
                {
                        cout << k;
                }
                m--;
                cout << endl;
        }
}