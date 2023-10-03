class Solution
{
public:
        vector<int> maximumValue(Node *node)
        {
                vector<int> ans;

                if (node == NULL)
                {
                        return ans;
                }

                queue<Node *> q;
                q.push(node);

                while (!q.empty())
                {

                        int maxi = INT_MIN;
                        int size = q.size();

                        for (int i = 0; i < size; i++)
                        {
                                Node *front = q.front();
                                q.pop();

                                if (front->data >= maxi)
                                {
                                        maxi = front->data;
                                }

                                if (front->left)
                                {
                                        q.push(front->left);
                                }
                                if (front->right)
                                {
                                        q.push(front->right);
                                }
                        }
                        ans.push_back(maxi);
                }
                return ans;
        }
};