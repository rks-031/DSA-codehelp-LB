#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int> *solve(Node<int> *first, Node<int> *second)
{

        if (first->next == NULL)
        {
                first->next = second;
                return first;
        }

        Node<int> *curr1 = first;
        Node<int> *next1 = curr1->next;
        Node<int> *curr2 = second;
        Node<int> *next2 = curr2->next;
        Node<int> *prev = NULL;

        while (next1 != NULL && curr2 != NULL)
        {
                if (curr2->data >= curr1->data && curr2->data <= next1->data)
                {
                        curr1->next = curr2;
                        curr2->next = next1;
                        prev = curr2;
                        curr2 = next2;
                        if (next2 != NULL)
                        {
                                next2 = next2->next;
                        }
                        curr1 = curr2;
                        next1 = next2;
                }
                else
                {
                        prev = curr1;
                        curr1 = next1;
                        next1 = next1->next;
                }
        }

        if (curr2 != NULL)
        {
                prev->next = curr2;
        }

        return first;
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
        if (first == NULL)
                return second;

        if (second == NULL)
                return first;

        if (first->data <= second->data)
        {
                return solve(first, second);
        }
        else
        {
                return solve(second, first);
        }
}
