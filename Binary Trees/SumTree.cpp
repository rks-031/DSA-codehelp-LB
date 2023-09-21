#include <bits/stdc++.h>

pair<bool, int> sumTreeFast(Node *root)
{
        if (root == NULL)
        {
                pair<bool, int> p = make_pair(true, 0);
                return p;
        }

        if (root->left == NULL && root->right == NULL)
        {
                pair<bool, int> p = make_pair(true, root->data);
                return p;
        }

        pair<bool, int> leftSumTree = sumTreeFast(root->left);
        pair<bool, int> rightSumTree = sumTreeFast(root->right);

        bool left = leftSumTree.first;
        bool right = rightSumTree.first;

        bool condition = root->data == leftSumTree.second + rightSumTree.second;

        pair<bool, int> ans;

        if (left && right && condition)
        {
                ans.first = true;
                ans.second = 2 * root->data;
        }
        else
        {
                ans.first = false;
        }

        return ans;
}

bool isSumTree(Node *root)
{
        return sumTree(root).first;
}