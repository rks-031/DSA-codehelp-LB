#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s)
{
        int i = 0;
        while ((i < s.length() - 1) && (s.length() != 0))
        {
                if (s[i] == s[i + 1])
                {
                        s.erase(i, 2); //(starting pos, count)
                        if (i != 0)
                        {
                                i--;
                        }
                }
                else
                {

                        i++;
                }
        }
        return s;
}

int main()
{
        string s;
        getline(cin, s);
        cout << removeDuplicates(s) << endl;
}