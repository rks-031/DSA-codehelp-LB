#include <bits/stdc++.h>
using namespace std;

int countSetBits(int a, int b)
{
        int count = 0;
        while (a != 0 && b != 0)
        {
                if (a & 1)
                {
                        count++;
                }
                a = a >> 1;

                if (b & 1)
                {
                        count++;
                }
                b = b >> 1;
        }
        return count;
}

int main()
{
        int a, b;
        cin >> a >> b;
        cout << "Total number of set bits: " << countSetBits(a, b) << endl;
        return 0;
}
