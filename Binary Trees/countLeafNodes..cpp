/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
void inorder(BinaryTreeNode<int> *root, int &count)
{
        // base case
        if (root == NULL)
        {
                return;
        }

        inorder(root->left, count);
        // cout << root-> data << " ";
        if (root->left == NULL && root->right == NULL)
        {
                count++;
        }
        inorder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
        // Write your code here.
        int cnt = 0;
        // leaf node: no children or simply no left child
        inorder(root, cnt);

        return cnt;
}