#include <bits/stdc++.h>
using namespace std;

int main()
{
        char name[20];
        cin >> name;    // terminates if encounters a space, a tab or enter
        name[2] = '\0'; // terminates the string
        cout << name;
}