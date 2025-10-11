#include <bits/stdc++.h>
using namespace std;
void fib(int n);
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    for (int i = 2; i < n; i++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    fib(n);
    return 0;
}

// another way to do it
void fib(int n)
{
    int a = 0;
    int b = 1;
    for (int j = 2; j < n; j++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}