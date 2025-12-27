#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> p;
    while (!q.empty())
    {
        p.push(q.front());
        q.pop();
    }
    while (!p.empty())
    {
        q.push(p.top());
        p.pop();
    }
}
int main()
{
    queue<int> p;
    int n;
    cin >> n;
    while (n-- > 0)
    {
        int q;
        cin >> q;
        p.push(q);
    }
    reverseQueue(p);
    int sum = 0;
    while (!p.empty())
    {
        sum += p.front();
        p.pop();
    }
    cout << sum << '\n';
}
