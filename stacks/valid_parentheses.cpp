class Solution
{
private:
        bool matches(char top, char ch)
        {
                return (top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']');
        }

public:
        bool isValid(string s)
        {
                stack<char> st;

                for (char ch : s)
                {
                        if (ch == '(' || ch == '{' || ch == '[')
                        {
                                st.push(ch);
                        }
                        else
                        {
                                if (!st.empty() && matches(st.top(), ch))
                                {
                                        st.pop();
                                }
                                else
                                {
                                        return false;
                                }
                        }
                }

                return st.empty();
        }
};
