#include <iostream>
using namespace std;

int main()
{
        int num[10];
        fill_n(num, 10, 1);
        for (int i = 1; i <= 10; i++)
        {
                cout << num[i] << endl;
        }
}
//fill_n method fills or initializes the entire array withe the same given value