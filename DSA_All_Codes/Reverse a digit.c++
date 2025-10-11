// reverse a number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int reminder = temp % 10;
        sum = reminder + sum * 10;
        temp /= 10;
    }
    cout << sum << endl;
    return 0;
}