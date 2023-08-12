#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
        int *arr;
        int top;
        int size;

        Stack(int size)
        {
                this->size = size;
                arr = new int[size];
                top = -1;
        }

        void push(int element)
        {
                if (top == size - 1)
                {
                        cout << "Stack overflow" << endl;
                        return;
                }
                else
                {
                        arr[++top] = element;
                }
        }

        void pop()
        {
                if (top == -1)
                {
                        cout << "Stack Underflow" << endl;
                        return;
                }
                else
                {
                        top--;
                }
        }

        int peek()
        {
                if (top == -1)
                {
                        cout << "Empty Stack" << endl;
                        return -1;
                }
                else
                {
                        cout << "Top of the Stack: ";
                        return arr[top];
                }
        }

        bool isempty()
        {
                if (top == -1)
                {
                        cout << "Empty Stack" << endl;
                        return true;
                }
                else
                {
                        cout << "Stack is not empty" << endl;
                        return false;
                }
        }
};

int main()
{
        Stack st(5);

        st.push(22);
        st.push(33);
        st.push(44);

        cout << st.peek() << endl;

        st.pop();
        cout << st.peek() << endl;

        st.pop();
        cout << st.peek() << endl;

        st.pop();
        cout << st.peek() << endl;

        
}