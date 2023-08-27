//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
        vector<int> prevSmaller(int *arr, int n)
        {
                vector<int> prev(n);
                stack<int> s;
                for (int i = 0; i < n; i++)
                {
                        while (!s.empty() && arr[s.top()] >= arr[i])
                        {
                                s.pop();
                        }
                        if (s.empty())
                        {
                                prev[i] = -1;
                        }
                        else
                        {
                                prev[i] = s.top();
                        }
                        s.push(i);
                }
                return prev;
        }

        vector<int> nextSmaller(int *arr, int n)
        {
                stack<int> s;
                vector<int> next(n);
                for (int i = n - 1; i >= 0; i--)
                {
                        while (!s.empty() && arr[s.top()] >= arr[i])
                        {
                                s.pop();
                        }
                        if (s.empty())
                        {
                                next[i] = n;
                        }
                        else
                        {
                                next[i] = s.top();
                        }
                        s.push(i);
                }
                return next;
        }

public:
        // Function to find maximum of minimums of every window size.
        vector<int> maxOfMin(int arr[], int n)
        {
                vector<int> ans(n, INT_MIN);
                vector<int> prev = prevSmaller(arr, n);
                vector<int> next = nextSmaller(arr, n);

                // update the array
                for (int i = 0; i < n; i++)
                {
                        int l = next[i] - prev[i] - 1;
                        ans[l - 1] = max(ans[l - 1], arr[i]);
                }

                // for unfilled places
                for (int i = n - 2; i >= 0; i--)
                {
                        ans[i] = max(ans[i], ans[i + 1]);
                }
                return ans;
        }
};

//{ Driver Code Starts.
int main()
{
        int t;
        cin >> t;

        while (t--)
        {
                int n;
                cin >> n;
                int a[n];
                for (int i = 0; i < n; i++)
                        cin >> a[i];
                Solution ob;
                vector<int> res = ob.maxOfMin(a, n);
                for (int i : res)
                        cout << i << " ";
                cout << endl;
        }
        return 0;
}

// } Driver Code Ends