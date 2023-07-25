#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
        cout << *p << endl;
}

void update(int *p)
{
        *p = *p + 1;
}
int getSum(int *arr, int n)
{
        cout << sizeof(arr) << endl; // this prints 4(or 8) because it's the size of the integer pointer
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum += arr[i];
        }
        return sum;
}
int main()
{
        int value = 5;
        int *p = &value;
        // // print(p);
        // cout << "Before: " << *p << endl;
        // // value can be updated directly but address can't
        // update(p);
        // cout << "After: " << *p << endl;
        int arr[5] = {1, 2, 3, 4, 5};
        cout << getSum(arr, 5) << endl;
}