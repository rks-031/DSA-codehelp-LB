#include <bits/stdc++.h>
using namespace std;

bool isValidCharacter(char ch)
{
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
                return 1;
        }
        return 0;
}

char toLowerCase(char ch)
{
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
                return ch;
        }
        else
        {
                return tolower(ch);
        }
}

bool checkPalindrome(string s)
{
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
                if (s[start] != s[end])
                {
                        return 0;
                }
                else
                {
                        start++;
                        end--;
                }
        }
        return 1;
}

bool isValidPalindrome(string s)
{
        string temp = "";
        // faltu characters hatane k liye
        for (int i = 0; i < s.length(); i++)
        {
                if (isValidCharacter(s[i]))
                {
                        temp.push_back(s[i]);
                }
        }

        // converting every character to lowercase
        for (int i = 0; i < temp.length(); i++)
        {
                temp[i] = toLowerCase(temp[i]);
        }

        // checking palindrome
        return (checkPalindrome(temp));
}

int main()
{
        string s;
        getline(cin, s);
        bool value = isValidPalindrome(s);
        value == 1 ? cout << "true" : cout << "false";
        return 0;
}