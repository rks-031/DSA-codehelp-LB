/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int> *root, vector<int> &ans)
{
        if (root == NULL)
                return;

        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
}
TreeNode<int> *inorderToBST(vector<int> &arr, int start, int end)
{
        if (start > end)
        {
                return nullptr;
        }

        int mid = start + (end - start) / 2;

        TreeNode<int> *root = new TreeNode<int>(arr[mid]);
        root->left = inorderToBST(arr, start, mid - 1);
        root->right = inorderToBST(arr, mid + 1, end);

        return root;
}

TreeNode<int> *balancedBst(TreeNode<int> *root)
{
        // Write your code here.
        vector<int> arr;
        inorder(root, arr);

        return inorderToBST(arr, 0, arr.size() - 1);
}
