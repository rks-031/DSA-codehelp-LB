bool search(Node *root, int x)
{
        Node *temp = root;

        while (temp != NULL)
        {
                if (temp->data == x)
                {
                        return true;
                }
                else if (temp->data > x)
                {
                        temp = temp->left;
                }
                else
                {
                        temp = temp->right;
                }
        }
        return false;
}