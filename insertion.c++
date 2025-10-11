//insertion

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, idx, value;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> idx >> value;
    for (int i = size - 1; i >= idx - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    cout << arr[idx - 1] << endl;
    arr[idx - 1] = value;
    size++;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}