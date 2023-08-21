//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// function Template for C++

// Function to reverse the queue.
class Solution
{
public:
        queue<int> rev(queue<int> q)
        {
                // add code here.
                vector<int> arr;
                while (q.size() != 0)
                {
                        int temp = q.front();
                        arr.push_back(temp);
                        q.pop();
                }

                for (int i = arr.size() - 1; i >= 0; i--)
                {
                        q.push(arr[i]);
                }

                return q;
        }
};

//{ Driver Code Starts.
int main()
{
        int test;
        cin >> test;
        while (test--)
        {
                queue<int> q;
                int n, var;
                cin >> n;
                while (n--)
                {
                        cin >> var;
                        q.push(var);
                }
                Solution ob;
                queue<int> a = ob.rev(q);
                while (!a.empty())
                {
                        cout << a.front() << " ";
                        a.pop();
                }
                cout << endl;
        }
}
// } Driver Code Ends