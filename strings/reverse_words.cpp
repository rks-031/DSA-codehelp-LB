#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &str)
{
        int i = 0;
        while (str[i] != '\0')
        {
                int start = i;
                // Skip all the spaces
                while (str[i] == ' ')
                {
                        i++;
                }
                int end = i - 1;
                while (start <= end)
                {
                        swap(str[start++], str[end--]);
                }
        }
}

int main()
{
        string str;
        getline(cin, str);
        reverseWords(str);
        cout << str;
        return 0;
}