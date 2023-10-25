vector<int> reverseLevelOrder(Node *root)
{
        // code here
        vector<int> ans;
        if (root == NULL)
                return ans;

        queue<Node *> q;
        q.push(root);
        stack<Node *> s;

        while (!q.empty())
        {
                Node *temp = q.front();
                q.pop();

                s.push(temp);

                if (temp->right)
                        q.push(temp->right);
                if (temp->left)
                        q.push(temp->left);
        }

        while (!s.empty())
        {
                Node *temp = s.top();
                ans.push_back(temp->data);
                s.pop();
        }

        return ans;
}
