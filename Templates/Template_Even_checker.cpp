#include <bits/stdc++.h>
using namespace std;

template <typename T>
T Eve_Odd(T x, T y)
{
    if (x % 2 == 0 && y % 2 != 0)
    {
        return x;
    }
    else if (x % 2 != 0 && y % 2 == 0)
    {
        return y;
    }
    else
        return -1;
};
int main()
{
    int n, p;
    cin >> n >> p;
    if (Eve_Odd(n, p) == -1)
    {
        cout << "NO" << '\n';
    }
    else
        cout << Eve_Odd(n, p) << '\n';
    return 0;
}
