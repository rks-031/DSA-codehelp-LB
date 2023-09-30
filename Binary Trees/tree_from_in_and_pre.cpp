class Solution
{
public:
        int search(int arr[], int strt, int end, int value)
        {
                int i;
                for (i = strt; i <= end; i++)
                {
                        if (arr[i] == value)
                                return i;
                }
                return -1; // Add a default return value to handle cases where value is not found.
        }

        Node *solve(int in[], int pre[], int inStrt, int inEnd, int &preIndex)
        {
                if (inStrt > inEnd)
                        return NULL;

                Node *tNode = new Node(pre[preIndex++]);

                if (inStrt == inEnd)
                        return tNode;

                int inIndex = search(in, inStrt, inEnd, tNode->data);

                tNode->left = solve(in, pre, inStrt, inIndex - 1, preIndex);
                tNode->right = solve(in, pre, inIndex + 1, inEnd, preIndex);

                return tNode;
        }

        Node *buildTree(int in[], int pre[], int n)
        {
                int preIndex = 0; // Initialize preIndex to 0.
                Node *ans = solve(in, pre, 0, n - 1, preIndex);
                return ans;
        }
};