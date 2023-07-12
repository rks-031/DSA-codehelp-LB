#include <iostream>
using namespace std;

int main()
{
        int n = 3;
        int k = 1;
        for (char i = 65; i < 65 + n; i++)
        {
                for (int j = 1; j <= k; j++)
                {
                        cout << i << " ";
                }
                k++;
                cout << endl;
        }
}