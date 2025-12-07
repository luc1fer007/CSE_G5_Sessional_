#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string s;
        cin >> s;
        int count = 0;
        int check = 1;
        for (char c : s)
        {
            if (c == '(')
                count++;
            else if (c == ')')
                count--;

            if (count < 0)      // ) is more then (
            {
                check = 0;
                break;
            }
        }
        if (count > 0)
            check = 0;         // no match of ( and ) ;
        if (check)
        {
            cout << 1 << '\n';
        }
        else
            cout << 0 << '\n';
    }
    return 0;
}
