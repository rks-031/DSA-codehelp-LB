#include <bits/stdc++.h>
using namespace std;

int main()
{
        stack<int> s;
        s.push(2);
        s.push(3);
        cout << s.top() << endl;
        s.pop();
        cout << s.top() << endl;
        s.empty() ? cout << "empty" : cout << "not empty" << endl;
        cout << "size of the stack: " << s.size() << endl;
}