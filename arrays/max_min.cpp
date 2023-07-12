#include <iostream>
using namespace std;

int maxElement(int a[], int size)
{
        int max = a[0];
        for (int i = 0; i < size; i++)
        {
                if (a[i] >= max)
                        max = a[i];
        }
        return max;
}

int minElement(int a[], int size)
{
        int min = a[0];
        for (int i = 0; i < size; i++)
        {
                if (a[i] <= min)
                        min = a[i];
        }
        return min;
}

int main()
{
        int a[5], size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
                cin >> a[i];
        }
        cout << "Maximum element: " << maxElement(a, size) << endl;
        cout << "Minimum element: " << minElement(a, size) << endl;
}