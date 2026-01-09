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
    bool check = true;
    while (!p.empty())
    {
        if(!check)
            cout << " ";
        cout << p.top();
        check = false;
        p.pop();
    }
    cout << endl;
    cout << (p.empty() ? "YES\n" : "NO\n");
    cout << p.size() << '\n';
    return 0;
}
