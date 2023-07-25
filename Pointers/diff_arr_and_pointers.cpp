#include <bits/stdc++.h>
using namespace std;

int main()
{
        int arr[10] = {1, 2};
        int *p = &arr[0];
        // 1. differences in size
        //  cout << sizeof(arr) << endl;  // size of arr
        //  cout << sizeof(*arr) << endl; // size of 1st element of the arr
        //  cout << sizeof(&arr) << endl; // size of 1st location's addr
        //  cout << sizeof(p) << endl;    // size of pointer

        // // 2. differences in address
        // cout << &arr[0] << endl;
        // cout << &arr << endl;
        // cout << arr << endl;
        // // same result in all of them

        // cout << p << endl;  // address of 1st index
        // cout << *p << endl; // value of 1st element
        // cout << &p << endl; // address of pointer

        // 3. content of symbol table cannot be changed
        // errer
        // arr = arr + 1;
        cout << p << endl;
        p = p + 1;
        cout << p << endl;
}