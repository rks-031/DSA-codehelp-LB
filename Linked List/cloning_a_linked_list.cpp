class Solution
{
private:
        void insertAtTail(Node *&head, Node *&tail, int data)
        {
                Node *temp = new Node(data);
                if (head == NULL)
                {
                        head = temp;
                        tail = temp;
                }
                else
                {
                        tail->next = temp;
                        tail = temp;
                }
        }

public:
        Node *copyList(Node *head)
        {
                Node *cloneHead = NULL;
                Node *cloneTail = NULL;

                Node *temp = head;

                while (temp != NULL)
                {
                        insertAtTail(cloneHead, cloneTail, temp->data);
                        temp = temp->next;
                }

                unordered_map<Node *, Node *> mapping;

                Node *originalNode = head;
                Node *cloneNode = cloneHead;

                while (originalNode != NULL && cloneNode != NULL)
                {
                        mapping[originalNode] = cloneNode;
                        originalNode = originalNode->next;
                        cloneNode = cloneNode->next;
                }

                originalNode = head;
                cloneNode = cloneHead;

                while (originalNode != NULL && cloneNode != NULL)
                {
                        cloneNode->arb = mapping[originalNode->arb];
                        originalNode = originalNode->next;
                        cloneNode = cloneNode->next;
                }

                return