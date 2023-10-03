int maxValue(Node *root)
{
        if (root == NULL)
        {
                return -1;
        }

        Node *temp = root;

        while (temp->right != NULL)
        {
                temp = temp->right;
        }

        return temp->right;
}