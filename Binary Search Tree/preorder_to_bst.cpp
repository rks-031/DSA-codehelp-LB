#include <bits/stdc++.h>
/*
    Following is the class structure of BinaryTreeNode class for referance:

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

        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/
BinaryTreeNode<int> *inorderToBst(vector<int> arr, int start, int end)
{
        if (start > end)
        {
                return nullptr;
        }

        int mid = start + (end - start) / 2;

        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(arr[mid]);
        root->left = inorderToBst(arr, start, mid - 1);
        root->right = inorderToBst(arr, mid + 1, end);

        return root;
}

BinaryTreeNode<int> *preorderToBST(vector<int> &preorder)
{
        // Write your code here.
        // for inorder-traversal of the tree: sort the arr
        int n = preorder.size();
        sort(preorder.begin(), preorder.end());

        return inorderToBst(preorder, 0, n - 1);
}