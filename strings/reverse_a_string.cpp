#include <bits/stdc++.h>
using namespace std;

void revString(char name[])
{
        int start = 0;
        int end = strlen(name) - 1;
        while (start <= end)
        {
                swap(name[start], name[end]);
                start++;
                end--;
        }
}
int main()
{
        char name[20];
        cin >> name;
        revString(name);
        cout << name;
}