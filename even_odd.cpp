#include <bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
        return (num % 2 == 0) ? true : false;
}

int main()
{
        int num;
        cin >> num;
        bool val = isEven(num);
        if (val == true)
        {
                cout << "even";
        }
        else
        {
                cout << "odd";
        }
}