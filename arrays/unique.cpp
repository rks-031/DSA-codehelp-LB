#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << a[i] << " ";
        }
}

int findUnique(int a[], int size)
{
        for (int i = 0; i < size; i++)
        {
                int flag = 0;
                int temp = a[i];
                for (int j = i + 1; j < size; j++)
                {

                        if (a[j] == temp)
                                flag = 1;
                }
                if (flag == 0)
                {
                        return temp;
                }
        }
}

int main()
{

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                int size;
                cin >> size;
                int a[size];
                for (int i = 0; i < size; i++)
                {
                        cin >> a[i];
                }
                cout << findUnique(a, size) << endl;
        }
}