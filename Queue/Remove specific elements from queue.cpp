#include <bits/stdc++.h>
using namespace std;

struct myQueue
{
    int *arr;
    int size;
    int capacity;

    myQueue(int x)
    {
        capacity = x;
        arr = new int[capacity];
        size = 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enQueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is Full" << "\n";
            return;
        }
        arr[size++] = x;
    }

    void deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << '\n';
            return; 
        }
        // Shift elements to fill the gap
        for (int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[0];
    }
};

// Function to remove all occurrences of a specific value
void removeElement(myQueue &q, int valueToRemove)
{
    int originalSize = q.size;
    int count = 0;

    // Iterate through all elements in the queue exactly once
    while(count < originalSize)
    {
        int current = q.getFront();
        q.deQueue();

        // Only add it back if it is NOT the value we want to remove
        if (current != valueToRemove)
        {
            q.enQueue(current);
        }
        
        count++;
    }
}

int main()
{
    int n;
    cout << "Enter size of queue: ";
    cin >> n;

    myQueue q(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.enQueue(x);
    }

    int target;
    cout << "Enter element to remove: ";
    cin >> target;

    // Perform removal
    removeElement(q, target);

    // Print resulting queue
    cout << "Final Queue: ";
    while (!q.isEmpty())
    {
        cout << q.getFront() << " ";
        q.deQueue();
    }
    cout << endl;

    return 0;
}
