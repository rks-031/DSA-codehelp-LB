
void insertAtBottom(stack<int> &stack, int x)
{
        vector<int> st;

        while (!stack.empty())
        {
                st.push_back(stack.top());
                stack.pop();
        }

        reverse(st.begin(), st.end());

        stack.push(x);

        for (int i = 0; i < st.size(); i++)
        {
                stack.push(st[i]);
        }
}

void reverseStack(stack<int> &stack)
{
        // base case
        if (stack.empty())
        {
                return;
        }

        int num = stack.top();
        stack.pop();

        // recursive call
        reverseStack(stack);

        insertAtBottom(stack, num);
}