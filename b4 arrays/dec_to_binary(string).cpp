#include <bits/stdc++.h>
using namespace std;

void revString(string str)
{
        for (int i = 0; i < str.size(); i++)
        {
                swap(str[i], str[str.size() - i - 1]);
        }
        cout << str << endl;
}

string DecToBin(int num)
{
        string str;
        while (num != 0)
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
        return str;
}

int main()
{
        int num;
        cin >> num;
        string str = DecToBin(num);
        revString(str);
}