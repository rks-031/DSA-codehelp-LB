#include <bits/stdc++.h>
using namespace std;

int main()
{
        int num = 7;
        // int cnt = _builtin_popcount(num);
        // cout << cnt;
        // this doesn't work anymore in c++

        // what can be used to count the number of setbits in a number is: bitset

        bitset<32> binary(num);
        int cnt = binary.count();
        cout << cnt; // 3
}