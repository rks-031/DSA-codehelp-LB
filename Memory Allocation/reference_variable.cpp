#include <bits/stdc++.h>
using namespace std;

void update(int &n) // pass by reference
{
        // here unlike pass  by value, copy variable ain't created
        n++;
}

// return by reference
int &func(int n)
{
        int num = n;
        int &ans = num;
        return ans;
}
//this is a bad practice because the num and ans are local variables. when the block ends, their existence ends.

int main()
{
        /*
        int i = 5;
        int &j = i; // reference variable
        cout << ++i << endl;
        cout << ++j << endl;
        cout << ++i << " " << ++j << endl; // evaluation from right, printing from left

        //basically i hi j hai and j hi i hai
        */

        int n = 5;
        cout << func(n) << endl;
        cout << "Before: " << n << endl;
        update(n);
        cout << "After: " << n << endl;
}