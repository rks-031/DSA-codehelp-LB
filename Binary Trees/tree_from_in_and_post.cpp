class Solution
{
public:
        int search(vector<int> &inorder, int inorderStart, int inorderEnd, int value)
        {
                for (int i = inorderStart; i <= inorderEnd; i++)
                {
                        if (value == inorder[i])
                        {
                                return i;
                        }
                }
                return -1;
        }

        TreeNode *solve(vector<int> &inorder, vector<int> &postorder, int &pindex, int inorderStart, int inorderEnd, int numNodes)
        {
                if (inorderStart > inorderEnd)
                {
                        return nullptr;
                }

                TreeNode *root = new TreeNode(postorder[pindex]);
                pindex--;

                if (inorderStart == inorderEnd)
                {
                        return root;
                }

                int pos = search(inorder, inorderStart, inorderEnd, root->val);

                root->right = solve(inorder, postorder, pindex, pos + 1, inorderEnd, numNodes);
                root->left = solve(inorder, postorder, pindex, inorderStart, pos - 1, numNodes);

                return root;
        }

        TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
        {
                int pindex = postorder.size() - 1;
                int numNodes = inorder.size(); // Using size() function to get the number of nodes
                int inorderEnd = inorder.size() - 1;
                TreeNode *ans = solve(inorder, postorder, pindex, 0, inorderEnd, numNodes);
                return ans;
        }
};
