/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
        // pred: left sub tree ka max value
        // succ: right sub tree ka max value

        int pred = -1, succ = -1;

        TreeNode *temp = root;

        // finding key
        while (temp->data != key)
        {
                if (temp->data > key)
                {
                        succ = temp->data;
                        temp = temp->left;
                }

                if (temp->data < key)
                {
                        pred = temp->data;
                        temp = temp->right;
                }
        }

        // pred and succ
        TreeNode *leftTree = temp->left;
        while (leftTree != nullptr)
        {
                pred = leftTree->data;
                leftTree = leftTree->right;
        }

        TreeNode *rightTree = temp->right;
        while (rightTree != nullptr)
        {
                succ = rightTree->data;
                rightTree = rightTree->left;
        }

        pair<int, int> result = make_pair(pred, succ);

        return result;
}