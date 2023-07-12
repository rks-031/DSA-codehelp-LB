#include <bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n)
{
        for (int i = 0; i <= 30; i++)
        {
                if (n == pow(2, i))
                {
                        return true;
                }
        }
        return false;
}
int main()
{
        int n;
        cin >> n;
        bool value = powerOfTwo(n);
        cout << value;
        return 0;
}