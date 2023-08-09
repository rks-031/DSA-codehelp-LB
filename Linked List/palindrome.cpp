bool isPalindrome(Node *head)
{
        vector<int> forward;
        Node *temp = head;
        while (temp != NULL)
        {
                forward.push_back(temp->data);
                temp = temp->next;
        }

        int start = 0;
        int end = forward.size() - 1;

        // vector<int> backward;
        while (start <= end)
        {
                if (forward[start] != forward[end])
                {
                        return false;
                }
                start++;
                end--;
        }
        return true;
}