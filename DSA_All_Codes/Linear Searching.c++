#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            cout << "Found in index: " << i << endl;
            break;
        }
    }
    return 0;
}
