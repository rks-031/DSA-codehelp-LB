void segregateElements(int arr[], int n)
{
        // Your code goes here
        stack<int> neg;
        stack<int> pos;

        for (int i = 0; i < n; i++)
        {
                if (arr[i] < 0)
                {
                        neg.push(arr[i]);
                }
                else
                {
                        pos.push(arr[i]);
                }
        }

        int i = n - 1;

        while (!neg.empty())
        {
                arr[i--] = neg.top();
                neg.pop();
        }

        while (!pos.empty())
        {
                arr[i--] = pos.top();
                pos.pop();
        }
}