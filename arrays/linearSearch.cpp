#include <iostream>
using namespace std;

void linearSearch(int a[], int n, int srch)
{
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] == srch)
                {
                        flag = 1;
                        cout << srch << " found at index: " << i << endl;
                }
        }
        if (flag == 0)
        {
                cout << "match not found" << endl;
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
        int srch;
        cin >> srch;
        linearSearch(a, n, srch);
        return 0;
}