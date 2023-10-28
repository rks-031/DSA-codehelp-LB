void solve(Node *root, bool isRight, int &sum)
{
        if (root == NULL)
                return;

        if (!root->left && !root->right && isRight)
        {
                sum += root->data;
                return;
        }

        solve(root->left, false, sum);
        solve(root->right, true, sum);
}

int rightLeafSum(Node *root)
{
        int sum = 0;
        solve(root, false, sum);

        return sum;
}