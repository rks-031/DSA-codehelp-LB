#include <bits/stdc++.h>
class Queue
{
        int Front;
        int Rear;
        int *arr;
        int size;

public:
        Queue()
        {
                // Implement the Constructor
                size = 10000;
                arr = new int[size];
                Front = Rear = 0;
        }

        /*----------------- Public Functions of Queue -----------------*/

        bool isEmpty()
        {
                // Implement the isEmpty() function
                if (Front == Rear)
                {
                        return true;
                }
                else
                {
                        return false;
                }
        }

        void enqueue(int data)
        {
                // Implement the enqueue() function
                // overflow condition
                if (Rear == size)
                {
                        return;
                }
                else
                {
                        // push the element
                        arr[Rear] = data;
                        Rear++;
                }
        }

        int dequeue()
        {
                // Implement the dequeue() function
                // underflow condition check
                if (Front == Rear)
                {
                        return -1;
                }
                else
                {
                        int ans = arr[Front];
                        arr[Front] = -1;
                        Front++;
                        if (Front == Rear)
                        {
                                Front = Rear = 0;
                        }
                        return ans;
                }
        }

        int front()
        {
                // Implement the Front() function
                if (Front == Rear)
                {
                        return -1;
                }
                else
                {
                        return arr[Front];
                }
        }
};