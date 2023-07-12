#include <bits/stdc++.h>
using namespace std;

int main()
{
        int amount;
        cin >> amount;
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
        int note;
        cin >> note;
        switch (note)
        {
        case 100:
                n1 = amount / note;
                amount %= note;
                cout << "100: " << n1 << endl;
        case 50:
                n2 = amount / note;
                amount %= note;
                cout << "50: " << n2 << endl;
        case 20:
                n3 = amount / note;
                amount %= note;
                cout << "20: " << n3 << endl;
        case 1:
                n4 = amount / note;
                amount %= note;
                cout << "10: " << n4 << endl;
                break;
        default:
                cout << "you can choose only 100 or 50 or 20 or 1 rupee note" << endl;
        }
}