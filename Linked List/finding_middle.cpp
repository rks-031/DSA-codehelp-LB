/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node *findMiddle(Node *head)
{
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
                temp = temp->next;
                count++;
        }

        int spot = (count / 2) + 1;
        int start = 1;
        while (start < spot)
        {
                head = head->next;
                start++;
        }
        return head;
}