#include <bits/stdc++.h>
using namespace std;

int main()
{
        // creating a queue
        queue<int> q;
        // pushing elements
        q.push(11);
        q.push(15);
        q.push(13);
        cout << "Size of queue: " << q.size() << endl;
        // popping elements
        q.pop();
        cout << "Size of queue: " << q.size() << endl;
        // checking if the queue is empty
        q.empty() ? cout << "Queue is empty" : cout << "Queue is not empty" << endl;
        // checking front and back of the queue
        cout << "Front of the queue is: " << q.front() << endl
             << "Back of the queue is: " << q.back() << endl;
}