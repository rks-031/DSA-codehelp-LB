#include <iostream>
using namespace std;

bool unique(int freq[], int n)
{
        for (int i = 0; i < n; i++)
        {
                for (int j = i + 1; j < n; j++)
                {
                        if (freq[j] == freq[i])
                        {
                                return false;
                        }
                }
        }
        return true;
}

bool Occurences(int a[], int n)
{
        int b[n];
        int freq[n];
        for (int i = 0; i < n; i++)
        {
                int count = 1;
                int temp = a[i];
                b[i] = a[i];
                for (int j = 0; j < n; j++)
                {
                        if (temp == b[j])
                        {
                                break;
                        }
                }
                for (int j = i + 1; j < n; j++)
                {
                        if (temp == a[j])
                        {
                                count++;
                        }
                }
                freq[i] = count;
        }
        bool value = unique(freq, sizeof(freq) / sizeof(int));
        cout << value;
        return value;
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
        if (Occurences(a, n))
        {
                cout << "True" << endl;
        }
        else
        {
                cout << "False" << endl;
        }
}
//pending