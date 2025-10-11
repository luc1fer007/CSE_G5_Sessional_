//deletion
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, idx;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> idx;
    int item = arr[idx - 1];
    for (int i = idx - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    cout << "Item: " << item << endl;
    return 0;
}