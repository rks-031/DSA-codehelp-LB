class Solution
{
private:
        int countNodes(struct Node *root)
        {
                if (root == NULL)
                {
                        return 0;
                }

                int count = 1 + countNodes(root->left) + countNodes(root->right);
                return count;
        }

        bool isCBT(struct Node *root, int index, int nodeCount)
        {
                if (root == NULL)
                        return true;

                if (index >= nodeCount)
                        return false;

                else
                {
                        bool left = isCBT(root->left, 2 * index + 1, nodeCount);
                        bool right = isCBT(root->right, 2 * index + 2, nodeCount);
                        return (left && right);
                }
        }

        bool isMaxHeap(struct Node *root)
        {
                // leaf node
                if (root->left == NULL && root->right == NULL)
                        return true;

                // sirf left child exist krta h
                if (root->right == NULL)
                        return (root->data > root->left->data);
                else
                {
                        // dono children hain
                        return ((root->data > root->left->data) && (root->data > root->right->data) && (isMaxHeap(root->left) && isMaxHeap(root->right)));
                }
        }

public:
        bool isHeap(struct Node *tree)
        {

                int index = 0;
                int nodeCount = countNodes(tree);
                if (isCBT(tree, index, nodeCount) && isMaxHeap(tree))
                        return true;
                else
                        return false;
        }
};