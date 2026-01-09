#include <bits/stdc++.h>
using namespace std;
void removeElement(queue<int> &p, int n)
{
    vector<int> k;
    while (!p.empty())
    {
        k.push_back(p.front());
        p.pop();
    }
    //using stl
    k.erase(remove(k.begin(), k.end(), n), k.end());
    for (int c : k)
    {
        p.push(c);
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
