#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
        if (str.length() == 1)
        {
                return str;
        }
        else
        {
                return str.back() + reverseString(str.substr(0, str.length() - 1));
        }
}

int main()
{
        string str;
        getline(cin, str);
        string ans = reverseString(str);
        cout << ans << endl;
}