#include <bits/stdc++.h>
using namespace std;

int main()
{
        // int num = 5;
        // cout << "addr of num: " << &num << endl;
        // int *ptr = &num;
        // cout << "value of ptr: " << *ptr << endl;
        // cout << ptr << endl;

        // double d = 4.3;
        // double *p = &d;
        // cout << sizeof(p) << endl;

        // // bad practice
        // //  int *p2;
        // // pointer to  int is created and is pointing to some garbage address

        // int *p2 = 0;
        // int i = 4;
        // p2 = &i; // this is similar to int *p2=&i;

        // // pointer does not creates a copy
        // int num = 5;
        // int a = num;
        // a++;
        // cout << num << endl;
        // int *ptr = &num;
        // (*ptr)++;
        // cout << num;

        // // copying a pointer
        // int *q = ptr;
        // cout << ptr << " - " << q << endl;
        // cout << *ptr << " - " << *q << endl;

        // pointer arithmetic
        int i = 3;
        int *t = &i;
        *t = *t + 1; // value at the address referred by t is incremented by 1
        cout << *t << endl;
        cout << t << endl;
        t = t + 1; // t now points to next address
        cout << t << endl;
}