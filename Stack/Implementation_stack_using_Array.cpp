#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    int *arr;
    int capacity;
    int top;

public:
    myStack(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x)
    {
        if (top == capacity - 1)
        {
            cout << "Overflow" << '\n';
        }
        arr[++top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << '\n';
            return -1;
        }
        else
        {
            return arr[top--];
        }
    }
    int show()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << '\n';
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == capacity;
    }
};
int main()
{
    int n;
    cin >> n;
    myStack st(n);
    vector<int> p;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.isEmpty())
    {
        cout << st.show() << '\n';
        p.push_back(st.show());
        st.pop();
    }
    cout << endl;
    for (int c : p)
    {
        st.push(c);
    }
    while (!st.isEmpty())
    {
        cout << st.show() << " ";
        st.pop();
    }
    cout << "\n";
    cout << (st.isEmpty() ? "YES" : "NO");
    cout << "\n";
    cout << (st.isFull() ? "YES" : "NO");
    return 0;
}
