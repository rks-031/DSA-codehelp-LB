#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
                this->data = data;
                this->next = NULL;
        }
};

void reverse(LinkedListNode<int> *&head, LinkedListNode<int> *curr, LinkedListNode<int> *prev)
{

        if (curr == NULL)
        {
                head = prev;
                return;
        }

        LinkedListNode<int> *forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
        LinkedListNode<int> *curr = head;
        LinkedListNode<int> *prev = NULL;

        reverse(head, curr, prev);
        return head;
}

