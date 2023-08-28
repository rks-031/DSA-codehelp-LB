class Solution
{
private:
        int height(struct Node *root)
        {

                if (root == NULL)
                {
                        return 0;
                }
                // code here
                int rh = height(root->left);
                int lh = height(root->right);

                return max(lh, rh) + 1;
        }

public:
        // Function to return the diameter of a Binary Tree.
        int diameter(Node *root)
        {
                if (root == NULL)
                {
                        return 0;
                }

                int d1 = diameter(root->left);                         // left sub tree
                int d2 = diameter(root->right);                        // right sub tree
                int d3 = height(root->left) + 1 + height(root->right); // both left and right sub tree

                return max(d1, max(d2, d3));
        }
};

// time complexity: O(n2)