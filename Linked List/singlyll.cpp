#include <bits/stdc++.h>
using namespace std;

class node
{
public:
        int data;
        node *next;

        // constructor
        node(int data)
        {
                this->data = data;
                this->next = NULL;
        }

        // destructor
        ~node()
        {
                int value = this->data;
                // memory free
                if (this->next != NULL)
                {
                        delete next;
                        this->next = NULL;
                }
                cout << "deleted : " << value << endl;
        }
};

void InsertAtHead(node *&head, int data)
{
        node *temp = new node(data);
        temp->next = head;
        head = temp;
}

void InsertAtTail(node *&tail, int data)
{
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
}

void InsertAtPos(node *&tail, node *&head, int data, int pos)
{
        // inserting at start
        if (pos == 1)
        {
                InsertAtHead(head, data);
                return;
        }

        node *temp = head;
        int count = 1;

        while (count < pos - 1)
        {
                temp = temp->next;
                count++;
        }

        // inserting at end
        if (temp->next == NULL)
        {
                InsertAtTail(tail, data);
                return;
        }

        node *nodeToInsert = new node(data);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
}

// traversing
void print(node *&head)
{
        node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << endl;
                temp = temp->next;
        }
        cout << endl;
}

void DeleteNode(node *&head, int pos)
{
        // deleting first or start node
        if (pos == 1)
        {
                node *temp = head;
                head = head->next;
                // memory free start node+
                temp->next = NULL;
                delete temp;
        }
        else
        {
                // deleting middle or last node
                node *curr = head;
                node *prev = NULL;

                int cnt = 1;
                while (cnt <= pos)
                {
                        prev = curr;
                        curr = curr->next;
                        cnt++;
                }

                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
        }
}

int main()
{
        // create a new node
        node *n1 = new node(10);
        // cout << n1->data << endl;
        // cout << n1->next << endl;

        // head pointed to node1
        node *head = n1;
        node *tail = n1;
        print(head);

        InsertAtHead(head, 12);
        print(head);

        InsertAtHead(head, 15);
        print(head);

        InsertAtPos(tail, head, 22, 4);
        print(head);

        DeleteNode(head, 2);
        print(head);

        // cout << head->data << " " << tail->data << endl;
}