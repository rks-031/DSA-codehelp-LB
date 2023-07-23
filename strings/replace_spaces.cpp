#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str)
{
        for (int i = 0; i < str.length(); i++)
        {
                if (str[i] == ' ')
                {
                        str.replace(i, 1, "@40");
                }
        }
        string temp = str;
        return str;
}

int main()
{
        string s;
        getline(cin, s);
        cout << replaceSpaces(s) << endl;
        return 0;
}
