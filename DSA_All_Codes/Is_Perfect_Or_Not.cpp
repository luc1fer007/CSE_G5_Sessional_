#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int sum = 0;
    int num = x;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (num == sum);
}
int main()
{
    int n;
    cin >> n;
    (check(n)) ? cout << "Perfect" << '\n' : cout << "Not Perfect" << '\n';
    return 0;
}

// Optimized code
#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            (i != sqrt(x)) ? sum += i + (x / i) : sum += i;
        }
    }
    if (sum == x && x != 1)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    check(n) ? cout << "Perfect" << '\n' : cout << "Not Perfect" << '\n';
    return 0;
}
