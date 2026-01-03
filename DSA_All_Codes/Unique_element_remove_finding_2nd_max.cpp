#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.rbegin(), p.rend());
    p.erase(unique(p.begin(), p.end()), p.end());
    cout << p[1] << '\n';     // second Max
    cout << p.size() << '\n'; // numbers of unique elements
    return 0;
}
