/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution
{
public:
        vector<int> inOrder(Node *root)
        {
                vector<int> ans;
                if (root == NULL)
                {
                        return ans;
                }

                Node *curr;
                Node *pre;
                curr = root;

                while (curr != NULL)
                {
                        if (curr->left == NULL)
                        {
                                ans.push_back(curr->data);
                                curr = curr->right;
                        }
                        else
                        {
                                pre = curr->left;
                                while (pre->right != NULL && pre->right != curr)
                                {
                                        pre = pre->right;
                                }

                                if (pre->right == NULL)
                                {
                                        pre->right = curr;
                                        curr = curr->left;
                                }
                                else
                                {
                                        pre->right = NULL;
                                        ans.push_back(curr->data);
                                }
                        }
                }
                curr = curr->right;

                return ans;
        }
};