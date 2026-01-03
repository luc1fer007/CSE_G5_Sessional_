//use descending sorting
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    return 0;
}

// use ascending sorting

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[n - 1] << endl;
    n = n - 1;
    cout << arr[n - 1] << endl;
    return 0;
}

//Optimized code 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    vector<int> p;
    while (c-- > 0)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.rbegin(), p.rend());
    cout << p[1] << '\n';
    return 0;
}
