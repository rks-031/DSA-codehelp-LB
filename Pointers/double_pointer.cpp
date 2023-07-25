#include <bits/stdc++.h>
using namespace std;

void update(int **p)
{
        //      ptr2=ptr2+1;
        // no change
        // *p = *p + 1;
        // value of ptr1 will change
        **p = **p + 1;
        // value of i will change
}

int main()
{
        int i = 5;
        int *ptr = &i;
        int **ptr2 = &ptr; // double pointer

        // cout << i << endl;      // i
        // cout << *ptr << endl;   // i
        // cout << **ptr2 << endl; // i

        // // for printing the value at ptr
        // cout << &i << endl;
        // cout << ptr << endl;
        // cout << *ptr2 << endl;

        cout << "Before update: " << endl;
        cout << i << endl
             << ptr << endl
             << ptr2 << endl;
        update(ptr2);
        cout << "After update: " << endl;
        cout << i << endl
             << ptr << endl
             << ptr2 << endl;
}
