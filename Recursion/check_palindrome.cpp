#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
        if (i > j)
        {
                return true;
        }
        if (str[i] != str[j])
        {
                return false;
        }
        else
        {
                return (str, i + 1, j - 1);
        }
}

int main()
{
        string str;
        getline(cin, str);
        bool value = checkPalindrome(str, 0, str.length() - 1);
        value == 1 ? cout << "Palindrome" : cout << "Not a palindrome";
}