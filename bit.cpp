#include <iostream>
using namespace std;

int main()
{
        // int a = 4, b = 6;
        // cout << (a & b) << endl
        //      << (a | b) << endl
        //      << (~a) << endl
        //      << (~b) << endl
        //      << (a ^ b) << endl;

        // cout << (5 << 1) << endl;
        // cout << (3 << 2) << endl;
        // cout << (15 >> 1) << endl;
        // cout << (19 << 1) << endl;

        int n, flag = 0;
        cin >> n;
        if (n == 2)
        {
                cout << "prime";
        }
        else
        {
                for (int i = 2; i < n; i++)
                {
                        if (n % i == 0)
                        {
                                flag = 1;
                                cout << "not prime";
                                break;
                        }
                }
                if (flag == 0)
                        cout << "prime";
        }
}