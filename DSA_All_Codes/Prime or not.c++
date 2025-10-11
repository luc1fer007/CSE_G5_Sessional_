#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 1)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl;
        }
    }
}