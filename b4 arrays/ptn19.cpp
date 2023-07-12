#include <iostream>
using namespace std;

int main()
{
        int n = 4;
        int m = 4;
        for (int i = 1; i <= n; i++)
        {
                for (int k = 1; k < i; k++)
                {
                        cout << " ";
                }
                for (int j = i; j <= m; j++)
                {
                        cout << "*";
                }
                cout << endl;
                m--;
        }
}