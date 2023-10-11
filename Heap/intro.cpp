#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
        int arr[100];
        int size;

        heap()
        {
                arr[0] = -1;
                size = 0;
        }

        void insert(int value)
        {
                size = size + 1;
                int index = size;
                arr[index] = value;

                while (index > 1)
                {
                        int parent = index / 2;

                        if (arr[index] > arr[parent])
                        {
                                swap(arr[index], arr[parent]);
                                index = parent;
                        }
                        else
                        {
                                return;
                        }
                }
        }

        void print()
        {
                for (int i = 1; i <= size; i++)
                {
                        cout << arr[i] << " ";
                }
        }

        void deleteFromHeap()
        {
                if (size == 0)
                {
                        cout << "Nothing in heap" << endl;
                        return;
                }

                // step1: put last element to root element
                arr[1] = arr[size];
                // remove the last element
                size--;

                // take root to it's correct postion
                int i = 1;
                while (i < size)
                {
                        int leftIndex = 2 * i;
                        int rightIndex = 2 * i + 1;

                        if (leftIndex < size && arr[i] < arr[leftIndex])
                        {
                                swap(arr[i], arr[leftIndex]);
                                i = leftIndex;
                        }
                        else if (rightIndex < size && arr[i] < arr[rightIndex])
                        {
                                swap(arr[i], arr[rightIndex]);
                                i = rightIndex;
                        }
                        else
                        {
                                return;
                        }
                }
        }
};

void heapify(int arr[], int n, int i)
{
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left])
        {
                largest = left;
        }

        if (right <= n && arr[largest] < arr[right])
        {
                largest = right;
        }

        // check krenge ki largest update hua h ya nhi
        // agar largest i k equal nhi hoga yaani update ho gya
        if (largest != i)
        {
                // sahi jagah pahuchana hai
                swap(arr[largest], arr[i]);
                heapify(arr, n, largest);
        }
}

void heapSort(int arr[], int n)
{
        int size = n;
        while (size > 1)
        {
                swap(arr[size], arr[1]);
                size--;
        }
        // root node ko sahi position pe laane k liye heapify
        heapify(arr, size, 1);
}

int main()
{
        // heap h;
        // h.insert(50);
        // h.insert(55);
        // h.insert(53);
        // h.insert(52);
        // h.insert(54);
        // h.print();
        // cout << endl;
        // h.deleteFromHeap();
        // h.print();

        // int arr[6] = {-1, 54, 53, 55, 52, 50};
        // int n = 5;

        // for (int i = n / 2; i > 0; i--)
        // {
        //         heapify(arr, n, i);
        // }

        // cout << "Printing the heapified array" << endl;

        // for (int i = 1; i <= n; i++)
        // {
        //         cout << arr[i] << " ";
        // }
        // cout << endl;

        // cout << "Printing the sorted array" << endl;

        // for (int i = 1; i <= n; i++)
        // {
        //         cout << arr[i] << " ";
        // }
        // cout << endl;

        cout << "Maxheap using stl" << endl;
        priority_queue<int> pq; // maxheap
        pq.push(4);
        pq.push(3);
        pq.push(2);
        pq.push(1);

        cout << pq.top() << endl;
        pq.pop();
        cout << pq.top() << endl;
        cout << pq.size() << endl;

        cout << "Minheap using stl" << endl;
        priority_queue<int, vector<int>, greater<int>> minheap;
        minheap.push(4);
        minheap.push(3);
        minheap.push(2);
        minheap.push(1);

        cout << minheap.top() << endl;
        minheap.pop();
        cout << minheap.top() << endl;
        cout << minheap.size() << endl;

        return 0;
}