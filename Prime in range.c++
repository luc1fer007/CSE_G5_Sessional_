
// have to find prime in all the numbers from 1 to n;
#include <bits/stdc++.h>
using namespace std;
void prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        int count = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                count = 0;
            break;
        }
        if (count)
            cout << i << " " << "Prime" << endl;
        else
            cout << i << " " << "Not Prime" << endl;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}