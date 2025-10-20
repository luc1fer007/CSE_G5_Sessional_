#include <bits/stdc++.h>
using namespace std;

#define ll long long // using macros
#define it int

// declare a function
int BinarySearch(it l, it h, it key, ll it arr[]);

int main()
{
    ios::sync_with_stdio(false); // for not syncing with c
    cin.tie(nullptr);            // for easy input hassle free

    it N, Q;                    // N is the element number and Q is the query(loop)
    cin >> N >> Q;
    ll int arr[N], X, i, l, h, j;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // Sorting the array binary search first condition
    // or u can use sort(arr, arr+size) function;

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                it temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    l = 0;     // low
    h = N - 1; // high (size - 1) for (o based indexing)
    while (Q--)
    {
        cin >> X;
        if (BinarySearch(l, h, X, arr)) // invoking the function
        {
            cout << "found" << endl;
        }
        else
            cout << "not found" << endl;
    }
    return 0;
}

int BinarySearch(it l, it h, it key, ll it Arr[])
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == Arr[mid])
        { // if key present at mid
            return 1;
        }
        else if (key < Arr[mid])
        { // ignore right half
            h = mid - 1;
        }
        else
            l = mid + 1; // ignore left half
    }
    return 0; // if key doesn't match anything//
}
