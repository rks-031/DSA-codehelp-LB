int minVal(Node *root)
{
        if (root == NULL)
        {
                return -1;
        }

        Node *temp = root;
        while (temp->left != NULL)
        {
                temp = temp->left;
        }

        return temp->data;
}

Node *deleteANodeFromBST(Node *root, int x)
{
        if (root == NULL)
        {
                return root;
        }

        if (root->data == x)
        {
                // 0 child
                if (root->left == NULL && root->right == NULL)
                {
                        delete root;
                        return NULL;
                }

                // 1 child
                if (root->left == NULL && root->right != NULL)
                {
                        // right child
                        Node *temp = root->right;
                        delete root;
                        return temp;
                }
                if (root->left != NULL && root->right == NULL)
                {
                        // left child
                        Node *temp = root->left;
                        delete root;
                        return temp;
                }

                // 2 child
                if (root->left != nullptr && root->right != nullptr)
                {
                        int mini = minVal(root->right);
                        root->data = mini;
                        root->right = deleteANodeFromBST(root->right, mini);
                        return root;
                }
        }

        if (root->data > x)
        {
                root->left = deleteANodeFromBST(root->left, x);
                return root;
        }

        if (root->data < x)
        {
                root->right = deleteANodeFromBST(root->right, val);
                return root;
        }
}