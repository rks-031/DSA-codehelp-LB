#include <iostream>
using namespace std;

void swapAlternate(int a[], int n)
{
        for (int i = 0; i < n; i = i + 2)
        {
                swap(a[i], a[i + 1]);
        }
}

void printArray(int a[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << a[i] << " ";
        }
}

int main()
{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        cout << "New Array" << endl;
        swapAlternate(a, n);
        printArray(a, n);
}