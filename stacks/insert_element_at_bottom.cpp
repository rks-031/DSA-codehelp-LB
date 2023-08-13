#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
        // Write your code here.
        vector<int> st;

        while (!myStack.empty())
        {
                st.push_back(myStack.top());
                myStack.pop();
        }
        reverse(st.begin(), st.end());

        myStack.push(x);

        for (int i = 0; i < st.size(); i++)
        {
                myStack.push(st[i]);
        }

        return myStack;
}
