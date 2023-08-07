#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int data;
        Node *prev;
        Node *next;

        Node(int d)
        {
                this->data = d;
                this->prev = NULL;
                this->next = NULL;
        }

        ~Node()
        {
                int value = this->data;
                if (next != NULL)
                {
                        delete next;
                        next = NULL;
                }
                cout << "Deleted: " << value << endl;
        }
};

void insertNode(Node *&tail, int element, int data)
{
        // empty list
        if (tail == NULL)
        {
                Node *temp = new Node(data);
                tail = temp;
                tail->next = tail; // circular
        }
        else
        {

                // assuming that the element is present in the list
                Node *curr = tail;
                while (curr->data != element)
                {
                        curr = curr->next;
                }

                // element found
                Node *temp = new Node(data);
                temp->next = curr->next;
                curr->next = temp;
        }
}

void deleteNode(Node *&tail, int element)
{
        // empty list
        if (tail == NULL)
        {
                cout << "List is empty" << endl;
                return;
        }
        else
        {
                // not empty and assuming that the element is already present in the list
                Node *prev = tail;
                Node *curr = prev->next;

                // only having 1 node
                if (curr == prev)
                {
                        tail = NULL;
                }

                while (curr->data != element)
                {
                        prev = curr;
                        curr = curr->next;
                }

                prev->next = curr->next;
                if (tail == curr)
                {
                        tail = prev;
                }
                curr->next = NULL;
                delete curr;
        }
}

void print(Node *&tail)
{

        Node *temp = tail;
        do
        {
                cout << tail->data << " ";
                tail = tail->next;
        } while (tail != temp);
        cout << endl
             << endl;
}

int main()
{
        Node *tail = NULL;
        insertNode(tail, 5, 3);
        print(tail);

        // insertNode(tail, 3, 5);
        // print(tail);

        // insertNode(tail, 5, 7);
        // print(tail);

        // insertNode(tail, 7, 9);
        // print(tail);

        // insertNode(tail, 5, 6);
        // print(tail);

        // insertNode(tail, 9, 10);
        // print(tail);

        deleteNode(tail, 3);
        print(tail);
}