#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string &str)
{
        int arr[26] = {0};
        for (int i = 0; i < str.length(); i++)
        {
                char ch = str[i];
                int num = 0;
                num = ch - 'a';
                arr[num]++;
        }
        int maxi = -1, ans = 0;
        for (int i = 0; i < 26; i++)
        {
                if (maxi < arr[i])
                {
                        ans = i;
                        maxi = arr[i];
                }
        }
        char finalans = ans + 'a';
        return finalans;
}

int main()
{
        string str;
        getline(cin, str);
        cout << getMaxOccuringChar(str);
        return 0;
}