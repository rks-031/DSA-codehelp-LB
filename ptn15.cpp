#include <iostream>
using namespace std;

int main()
{
        int n = 4;
        int row = 1;
        while (row <= n)
        {
                int col = 1;
                while (col <= row)
                {
                        char ch = 'A' + col + row - 2;
                        cout << ch;
                        col++;
                }
                cout << endl;
                row++;
        }
}