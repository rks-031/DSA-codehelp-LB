#include <bits/stdc++.h>

void interLeaveQueue(queue<int> &q)
{
        queue<int> nq;

        int n = q.size() / 2;

        // Placing the first half elements in another queue
        for (int i = 0; i < n; ++i)
        {
                int temp = q.front();
                q.pop();
                nq.push(temp);
        }

        // Interleaving process
        while (!nq.empty())
        {
                int temp = nq.front();
                nq.pop();
                q.push(temp);

                temp = q.front();
                q.pop();
                q.push(temp);
        }
}
