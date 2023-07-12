#include <iostream>
using namespace std;

int main()
{
        int n = 3;
        for (char i = 65; i < 65 + n; i++)
        {
                char value = i;
                for (int j = 1; j <= n; j++)
                {
                        cout << value << " ";
                        value++;
                }
                cout << endl;
        }
}