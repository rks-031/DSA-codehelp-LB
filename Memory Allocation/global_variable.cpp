#include <bits/stdc++.h>
using namespace std;

int score = 15;
// using a global variable in a program is a bad practice because it can be changed by any function
// rather we should always use reference variable
void a(int &i)
{
        cout << i << " " << score << endl; // 5 15
        score++;
}

void b(int &i)
{
        cout << i << " " << score << endl; // 5 16
}
int main()
{
        int i = 5;
        a(i);
        b(i);
}