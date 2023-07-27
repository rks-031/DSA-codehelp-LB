#include <bits/stdc++.h>
using namespace std;

string reverseString(string str, int n)
{
        if (str.length() == 1)
        {
                return str;
        }
        else
        {
                return str[n - 1] + reverseString(str.substr(0, n - 1), n - 1);
        }
}

int main()
{
        string str;
        getline(cin, str);
        int n = str.length();
        string ans = reverseString(str, n);
        cout << ans << endl;
}