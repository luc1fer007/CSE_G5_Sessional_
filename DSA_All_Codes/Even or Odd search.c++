#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count_Eve = 0, count_Odd = 0;
    cin >> n;
    int arr[n], arr_Eve[n], arr_Odd[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr_Eve[count_Eve++] = arr[i];
        }
        else
        {
            arr_Odd[count_Odd++] = arr[i];
        }
    }
    cout << endl;
    for (int i = 0; i < count_Eve; i++)
    {
        cout << arr_Eve[i];
        if (i != count_Eve - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < count_Odd; i++)
    {
        cout << arr_Odd[i];
        if (i != count_Odd - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    cout << "Even: " << count_Eve << endl;
    cout << "Odd: " << count_Odd << endl;
    return 0;
}
