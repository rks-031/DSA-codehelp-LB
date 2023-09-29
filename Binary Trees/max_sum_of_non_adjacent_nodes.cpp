class Solution
{
private:
        pair<int, int> solve(Node *root)
        {
                if (root == NULL)
                {
                        pair<int, int> p = make_pair(0, 0);
                        return p;
                }

                pair<int, int> left = solve(root->left);
                pair<int, int> right = solve(root->right);

                pair<int, int> res;

                res.first = root->data + left.second + right.second;
                res.second = max(left.first, left.second) + max(right.first, right.second);

                return res;
        }

public:
        // Function to return the maximum sum of non-adjacent nodes.
        int getMaxSum(Node *root)
        {
                // a: maxSum including current level
                // b: maxSum exculding current level pair<a,b>

                pair<int, int> ans = solve(root);

                return max(ans.first, ans.second);
        }
};