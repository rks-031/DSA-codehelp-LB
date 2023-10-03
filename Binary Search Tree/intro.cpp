#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int data;
        Node *left, *right;

        Node(int data)
        {
                this->data = data;
                this->left = NULL;
                this->right = NULL;
        }
};

vector<int> levelOrderTraversal(Node *root)
{
        vector<int> ans;
        if (root == NULL)
        {
                return ans;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
                Node *front = q.front();
                q.pop();

                ans.push_back(front->data);

                if (front->left)
                {
                        q.push(front->left);
                }

                if (front->right)
                {
                        q.push(front->right);
                }
        }
        return ans;
}

Node *insertIntoBST(Node *root, int data)
{
        // base case
        if (root == NULL)
        {
                root = new Node(data);
                return root;
        }

        // recursive calls
        if (data > root->data)
        {
                // right part
                root->right = insertIntoBST(root->right, data);
        }
        else
        {
                // left part
                root->right = insertIntoBST(root->left, data);
        }
        return root;
}
// time compexity: O(logn)

void takeInput(Node *&root)
{
        int data;
        cin >> data;
        while (data != -1)
        {
                root = insertIntoBST(root, data);
                cin >> data;
        }
}

int main()
{
        Node *root = NULL;
        cout << "Enter data to create BST" << endl;
        takeInput(root);
        cout << "Level Order Traversal of the Tree:" << endl;
        vector<int> lot = levelOrderTraversal(root);
        for (int i = 0; i < lot.size(); i++)
        {
                cout << lot[i] << " ";
        }
}