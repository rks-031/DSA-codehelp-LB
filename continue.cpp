#include <iostream>
using namespace std;

int main()
{
        for (int i = 0; i < 5; i++)
        {
                cout << "Hi" << endl;
                cout << "Hello" << endl;
                continue;
                cout << "Pls reply" << endl; // won't be printed
        }
        return 0;
}