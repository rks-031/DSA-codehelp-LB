
public:
void flatten(Node *root)
{
        // code here
        Node *curr, *prev;
        curr = root;

        if (root == nullptr)
        {
                return;
        }

        while (curr != NULL)
        {
                if (curr->left)
                {
                        prev = curr->left;
                        while (prev->right != NULL)
                        {
                                prev = prev->right;
                        }

                        prev->right = curr->right;
                        curr->right = curr->left;
                        curr->left = NULL;
                }

                curr = curr->right;
        }
}

;