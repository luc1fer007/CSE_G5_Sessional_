#include <bits/stdc++.h>
using namespace std;
void removeElement(queue<int> &q, int n)
{
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        int val = q.front();
        q.pop();
        if (val != n)
        {
            q.push(val);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    queue<int> p;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        p.push(x);
    }
    int k;
    cin >> k;
    removeElement(p, k);
    int check = 1;
    while (!p.empty())
    {
        if (!check)
            cout << " ";
        cout << p.front();
        check = 0;
        p.pop();
    }
    cout << endl;
    return 0;
}
