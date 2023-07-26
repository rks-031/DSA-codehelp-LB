#include <bits/stdc++.h>
using namespace std;

// if the call statement contains a value of the argument, that value will be passed,if not, the default value will be considered
// default argument must be at the rightmost
void print(int *arr, int size, int start = 2) // start is the default argument
{
        for (int i = start; i < size; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{
        int arr[] = {1, 2, 3, 4, 5};
        int size = sizeof(arr) / sizeof(int);
        print(arr, size, 0);
        print(arr, size);
}