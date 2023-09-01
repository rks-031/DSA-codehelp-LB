/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void traverseLeft(TreeNode<int> *root, vector<int> &ans)
{
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
                return;
        }

        ans.push_back(root->data);
        if (root->left)
        {
                traverseLeft(root->left, ans);
        }
        else
        {
                traverseLeft(root->right, ans);
        }
}
void traverseLeaf(TreeNode<int> *root, vector<int> &ans)
{
        if (root == NULL)
        {
                return;
        }
        if (root->left == NULL && root->right == NULL)
        {
                ans.push_back(root->data);
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
}

void traverseRight(TreeNode<int> *root, vector<int> &ans)
{
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
                return;
        }

        if (root->right)
        {
                traverseRight(root->right, ans);
        }
        else
        {
                traverseRight(root->left, ans);
        }

        ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
        // Write your code here.
        vector<int> ans;

        if (root == NULL)
        {
                return ans;
        }

        ans.push_back(root->data);

        // left part
        traverseLeft(root->left, ans);

        // leaf nodes
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);

        // right part
        traverseRight(root->right, ans);

        return ans;
}
