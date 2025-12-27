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
        }
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
            cout << "Queue is Empty " << -1 << '\n';
        }
        return arr[0];
    }
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << -1 << '\n';
        }
        return arr[size - 1];
    }
};
// reverse the queue to get back it's original position
void reverseQueue(myQueue &q)
{
    stack<int> p;
    while (!q.isEmpty())
    {
        p.push(q.getFront());
        q.deQueue();
    }
    while (!p.empty())
    {
        q.enQueue(p.top());
        p.pop();
    }
}
int main()
{
    int n;
    cin >> n;
    stack<int> p;
    myQueue q(n);
    while (n-- > 0)
    {
        int x;
        cin >> x;
        q.enQueue(x);
    }
    while (!q.isEmpty())
    {
        if (q.getFront() % 2 != 0)
        {
            p.push(q.getFront());
        }
        q.deQueue();
    }
    while (!p.empty())
    {
        q.enQueue(p.top());
        p.pop();
    }
    reverseQueue(q);
    while (!q.isEmpty())
    {
        cout << q.getFront() << '\n';
        q.deQueue();
    }
}
