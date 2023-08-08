#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
        if (head == nullptr || head->next == nullptr)
        {
                return head;
        }

        Node *curr = head;
        unordered_map<int, int> mpp;
        mpp[curr->data]++;
        while (curr->next != nullptr)
        {
                if (mpp.find(curr->next->data) != mpp.end())
                {
                        Node *temp = curr->next;
                        curr->next = temp->next;
                        delete temp;
                }
                else
                {
                        mpp[curr->next->data]++;
                        curr = curr->next;
                }
        }
        return head;
}