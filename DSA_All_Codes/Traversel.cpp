#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {8, 9, 5, 6, 7};
    for (int i : arr)
    {
        cout << i;
        if (i != 4)
        {
            cout << " ";
        }
    }
    cout << endl;
}