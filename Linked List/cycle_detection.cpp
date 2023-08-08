bool detectLoop(Node *head)
{
        if (head == NULL)
        {
                return false;
        }

        map<Node *, bool> visited;
        Node *temp = head;

        while (temp != NULL)
        {
                if (visited[temp] == true) // cycle is present
                {
                        return true;
                }
                visited[temp] = true;
                temp = temp->next;
        }
        return false;
}

// floyd's cycle detection algorithm
// time complexity: O(n)
bool detectLoop(Node *head)
{
        if (head == NULL)
        {
                return false;
        }

        Node *slow = NULL;
        Node *fast = NULL;

        while (slow != NULL && fast != NULL)
        {
                fast = fast->nextl while (fast != NULL)
                {
                        fast = fast->next;
                }

                slow = slow->next;
                if (slow == fast)
                {
                        return true;
                }
        }

        return false;
}