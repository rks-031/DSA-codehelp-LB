#include <bits/stdc++.h>
using namespace std;

int main()
{
        int r;
        cin >> r;
        int *cols = new int[r]; // array to store the number of columns in each row
        int **arr = new int *[r];

        // creating the array
        for (int i = 0; i < r; i++)
        {
                cout << "enter number of cols in row " << i << ": ";
                cin >> cols[i];
                arr[i] = new int[cols[i]];
        }

        // taking input
        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < cols[i]; j++)
                {
                        cin >> arr[i][j];
                }
        }

        // giving output
        for (int i = 0; i < r; i++)
        {
                for (int j = 0; j < cols[i]; j++)
                {
                        cout << arr[i][j] << " ";
                }
                cout << endl;
        }

        // releasing the memory
        for (int i = 0; i < r; i++)
        {
                delete[] arr[i];
        }
        delete[] arr;
}
