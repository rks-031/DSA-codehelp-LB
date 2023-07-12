#include <iostream>
using namespace std;

int main()
{
        int n = 3;
        for (int i = 1; i <= n; i++)
        {
                for (char j = 65; j < 65 + n; j++)
                {
                        cout << j << " ";
                }
                cout << endl;
        }
}