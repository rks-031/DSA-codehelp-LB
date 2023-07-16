#include <bits/stdc++.h>
using namespace std;

int main()
{
        stack<int> st;
        st.push_back(1);    //{1}
        st.push_back(2);    //{1,2}
        st.push_back(3);    //{1,2,3}
        st.push_back(3);    //{1,2,3,3}
        st.emplace_back(5); //{1,2,3,3,5}

        cout << st.top() << endl; // prints 5
        st.pop();                 //{1,2,3,3}

        cout << st.top() << endl;   // prints 3
        cout << st.size() << endl;  // prints 4
        cout << st.empty() << endl; // false

        stack<int, int> st1, st2;
        st1.swap(st2);
}