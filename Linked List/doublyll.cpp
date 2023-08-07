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

void insertAtHead(Node *&head, Node *&tail, int data)
{
        if (head == NULL)
        {
                Node *temp = new Node(data);
                head = temp;
                tail = temp;
        }
        else
        {
                Node *temp = new Node(data);
                temp->next = head;
                head->prev = temp;
                head = temp;
        }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
        if (tail == NULL)
        {
                Node *temp = new Node(data);
                tail = temp;
                head = temp;
        }
        else
        {
                Node *temp = new Node(data);
                tail->next = temp;
                temp->prev = tail;
                temp->next = NULL;
        }
}

void InsertAtPos(Node *&tail, Node *&head, int data, int pos)
{
        if (pos == 1)
        {
                insertAtHead(head, tail, data);
                return;
        }

        Node *temp = head;
        int cnt = 1;

        while (cnt < pos - 1)
        {
                temp = temp->next;
                cnt++;
        }

        if (temp->next == NULL)
        {
                insertAtTail(head, tail, data);
        }

        Node *nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
}

void DeleteNode(Node *&head, int pos)
{
        // deleting first or start node
        if (pos == 1)
        {
                Node *temp = head;
                temp->next->prev = NULL;
                head = temp->next;
                temp->next = NULL;
                delete temp;
        }
        else
        {
                // deleting middle or last node
                Node *curr = head;
                Node *prev = NULL;

                int cnt = 1;
                while (cnt <= pos)
                {
                        prev = curr;
                        curr = curr->next;
                        cnt++;
                }

                curr->prev = NULL;
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
        }
}

// length of the ll
int getLength(Node *head)
{
        int len = 0;
        Node *temp = head;
        while (temp != NULL)
        {
                len++;
                temp = temp->next;
        }
        return len;
}

// traversing a ll

void print(Node *&head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << endl;
                temp = temp->next;
        }
        cout << endl;
}

int main()
{
        Node *head = NULL;
        Node *tail = NULL;
        print(head);
        // length of the linked list
        // cout << getLength(head) << endl;
        insertAtHead(head, tail, 11);
        print(head);

        insertAtHead(head, tail, 13);
        print(head);

        insertAtHead(head, tail, 8);
        print(head);

        insertAtTail(head, tail, 25);
        print(head);

        InsertAtPos(tail, head, 100, 2);
        print(head);

        DeleteNode(head, 3);
        print(head);

        return 0;
}