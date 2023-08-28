class Solution
{
private:
        int height(struct Node *root)
        {
                if (root == NULL)
                {
                        return 0;
                }

                int lh = height(root->left);
                int rh = height(root->right);

                return max(lh, rh) + 1;
        }

public:
        // Function to check whether a binary tree is balanced or not.
        bool isBalanced(Node *root)
        {
                //  Your Code here
                if (root == NULL)
                {
                        return true;
                }

                bool left = isBalanced(root->left);
                bool right = isBalanced(root->right);

                bool diff = abs(height(root->left) - height(root->right)) <= 1;

                if (left && right && diff)
                {
                        return true;
                }
                else
                {
                        return false;
                }
        }
};