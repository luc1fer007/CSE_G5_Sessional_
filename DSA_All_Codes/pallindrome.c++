// reverse a number and then compare with the main number
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
    (sum == n) ? cout << "Palindrome" << endl : cout << "Not Palindrome";
    return 0;
}