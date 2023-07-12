#include <iostream>
using namespace std;

int main()
{
        unsigned int n;
        cin >> n;
        int sum_one = 0;
        while (n != 0)
        {
                if (n & 1)
                {
                        sum_one++;
                }
                n = n >> 1;
        }
        cout << sum_one << endl;
        // int d = 0;
        // int n1 = n;
        // while (n1 != 0)
        // {
        //         n1 /= 10;
        //         d++;
        // }
        // cout << n << endl;
        // for (int i = 1; i <= d; i++)
        // {
        //         int p;
        //         p = n % 10;
        //         if (p == 1)
        //         {
        //                 sum_one++;
        //         }
        //         n /= 10;
        // }
}