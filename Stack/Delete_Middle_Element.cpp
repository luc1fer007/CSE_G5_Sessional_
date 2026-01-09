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
    vector<int> v;
    while (!p.empty())
    {
        v.push_back(p.top());
        p.pop();
    }
    int mid = floor(v.size() / 2);
    v.erase(v.begin() + mid);
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        p.push(v[i]);
    }
    bool check = true;
    while (!p.empty())
    {
        if (!check)
            cout << " ";
        cout << p.top();
        check = false;
        p.pop();
    }
    cout << endl;
    return 0;
}

//Using function
#include <bits/stdc++.h>
using namespace std;
void deleteMid(stack<int> &p)
{
    vector<int> v;
    while (!p.empty())
    {
        v.push_back(p.top());
        p.pop();
    }
    int mid = floor(v.size() / 2);
    v.erase(v.begin() + mid);
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        p.push(v[i]);
    }
}
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
    deleteMid(p);
    bool check = true;
    while (!p.empty())
    {
        if (!check)
            cout << " ";
        cout << p.top();
        check = false;
        p.pop();
    }
    cout << endl;
    return 0;
}
