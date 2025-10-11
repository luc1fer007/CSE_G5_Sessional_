#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
    {
        cout << sum << " " << "is a perfect Number";
    }
    else
    {
        cout << sum << " " << "is not a perfect Number";
    }
    return 0;
}