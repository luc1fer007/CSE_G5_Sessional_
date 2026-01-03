// stack using stl;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> p;
    int n;
    cin >> n;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        p.push(x);
    }
    cout << (p.empty() ? "YES\n" : "NO\n");
    while (!p.empty())
    {
        cout << p.top() << '\n';
        p.pop();
    }
    cout << (p.empty() ? "YES\n" : "NO\n");
    cout << p.size() << '\n';
    return 0;
}
