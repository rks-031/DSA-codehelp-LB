int height(struct Node *node)
{

        if (node == NULL)
        {
                return 0;
        }
        // code here
        int rh = height(node->left);
        int lh = height(node->right);

        return max(lh, rh) + 1;
}