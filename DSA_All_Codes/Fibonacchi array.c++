// using array
#include <bits/stdc++.h>
using namespace std;
int fib(int n, int *arr);
int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        cout << a[0] << " ";
        int c = a[0] + a[1];
        a[0] = a[1];
        a[1] = c;
    }
    cout << endl;
    fib(n, a);
    return 0;
}

int fib(int n, int *arr)       //this *arr can be written as int arr[]
                              //but don't write int arr[n] because
                              // size of array must be known at compile time
{

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        cout << arr[0] << " ";
        int c = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = c;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int fib(int n, int *arr)
{
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a[n];
    fib(n, a);

    return 0;
}
