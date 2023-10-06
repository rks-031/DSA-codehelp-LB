#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
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

*************************************************************/
void inorder(BinaryTreeNode<int> *root, vector<int> &ans)
{
        // vector<int> ans;
        if (root == NULL)
        {
                return;
        }

        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
}

int kthSmallest(BinaryTreeNode<int> *root, int k)
{
        vector<int> ans;
        inorder(root, ans);
        if (k > ans.size())
                return -1;
        return ans[k - 1];
}