#include <bits/stdc++.h>
using namespace std;

int main()
{
        int a[] = {1, 2, 3, 4, 9};
        cout << max_element(a, a + 5) << endl;
        cout << *max_element(a, a + 5) << endl;
        cout << min_element(a, a + 5) << endl;
        cout << *min_element(a, a + 5) << endl;

        // max_element gives the address of the max element and asterisk before that gives us the value of that element. Same for min.
}