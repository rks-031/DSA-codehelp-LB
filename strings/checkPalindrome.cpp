#include <bits/stdc++.h>
using namespace std;

void revString(string &s)
{
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
                swap(s[start++], s[end--]);
        }
}

bool checkPalindrome(string &s)
{
        string str = s;
        revString(str);
        return str == s;
}

int main()
{
        string s;
        getline(cin, s);
        bool value = checkPalindrome(s);
        if (value == 0)
        {
                cout << "NO";
        }
        else
        {
                cout << "YES";
        }
}