#include <bits/stdc++.h>
using namespace std;

template <typename INT>
INT myMax(INT x, INT y)
{
    return (x > y) ? x : y;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << myMax(n, p) << endl;
    double k, m;
    cin >> k >> m;
    cout << myMax(k, m) << endl;
    string s, l;
    cin >> s >> l;
    cout << myMax(s, l) << endl;
    return 0;
} 
