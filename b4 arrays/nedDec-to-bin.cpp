#include <bits/stdc++.h>
using namespace std;

string revString(string str, char s)
{
        int n = str.length();
        for (int i = n; i < 8; i++)
                str += s;
        n = str.length();
        string ans = "";
        for (int i = n - 1; i >= 0; i--)
                ans += str[i];
        return ans;
}

string DecToBin(int num)
{
        string str = "";
        char s = '0';
        if (num < 0)
                s = '1';
        while (!(num == 0 || num == -1))
        {
                if (num & 1)
                {
                        str += "1";
                }
                else
                {
                        str += "0";
                }
                num = num >> 1;
        }
        return revString(str, s);
}

int main()
{
        int num;
        cin >> num;
        string str = DecToBin(num);
        cout << str;
}