#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int i = 0, answer = 0;
        while (n != 0)
        {
                int d = n % 10;
                if (d == 1)
                        answer += pow(2, i);
                n = n / 10;
                i++;
        }
        cout << answer << endl;
}