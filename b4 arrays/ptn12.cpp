#include <iostream>
using namespace std;

int main()
{
        char n = 3, ctr = 0;
        for (char i = 65; i <= 73; i++)
        {
                cout << i << " ";
                ctr++;
                if (ctr % 3 == 0)
                {
                        cout << endl;
                }
        }
}