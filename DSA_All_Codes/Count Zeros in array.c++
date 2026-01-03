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

//Optimized code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value;
    cin >> value; // what you want to count
    vector<int> p;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    cout << count(p.begin(), p.end(), value) << '\n';
    return 0;
}
