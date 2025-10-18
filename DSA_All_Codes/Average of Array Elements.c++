#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(2) << float(sum) / n << endl;
    return 0;
}
