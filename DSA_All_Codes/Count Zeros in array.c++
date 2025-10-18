#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "index: " << i << endl;
        }
    }
    return 0;
}
