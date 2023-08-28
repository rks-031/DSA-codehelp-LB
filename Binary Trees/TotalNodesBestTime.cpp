/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
        int findLeftHeight(TreeNode *curr)
        {
                int lh = 0;
                while (curr)
                {
                        lh++;
                        curr = curr->left;
                }

                return lh;
        }

        int findRightHeight(TreeNode *curr)
        {
                int rh = 0;
                while (curr)
                {
                        rh++;
                        curr = curr->right;
                }
                return rh;
        }

public:
        int countNodes(TreeNode *root)
        {
                if (root == NULL)
                {
                        return 0;
                }

                int lh = findLeftHeight(root);
                int rh = findRightHeight(root);

                if (lh == rh)
                {
                        return (1 << lh) - 1;
                }

                int leftNodes = countNodes(root->left);
                int rightNodes = countNodes(root->right);

                return 1 + leftNodes + rightNodes;
        }
};

// time complexity: O(logn)