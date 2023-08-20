#include <bits/stdc++.h>

class QueueNode
{
        int data;
        QueueNode *next;
};

class Queue
{
        QueueNode *Front;
        QueueNode *rear;

public:
        Queue()
        {
                // Implement the Constructor
                Front = rear = NULL;
        }

        /*----------------- Public Functions of Queue -----------------*/

        bool isEmpty()
        {
                // Implement the isEmpty() function
                return Front == NULL;
        }

        void enqueue(int data)
        {
                // Implement the enqueue() function

                QueueNode *temp = new QueueNode(data);
                if (Front == NULL)
                {
                        Front = temp;
                        rear = temp;
                }
                rear->next = temp;
                rear = temp;
        }

        int dequeue()
        {
                // Implement the dequeue() function
                if (Front != NULL)
                {
                        QueueNode *temp = Front;
                        int ans = Front->data;
                        Front = Front->next;
                        delete temp;
                        return ans;
                }
                return -1; // Queue is empty
        }

        int front()
        {
                // Implement the Front() function
                if (Front == NULL)
                {
                        return -1; // Queue is empty
                }
                return Front->data;
        }
};
