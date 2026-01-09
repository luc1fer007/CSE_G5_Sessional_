#include <bits/stdc++.h>
using namespace std;

bool check(string &s)
{
    stack<char> p;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            p.push(c);
        }
        else
        {
            if (p.empty())
            {
                return false;
            }
            if ((c == ')' && p.top() != '(') ||
                (c == '}' && p.top() != '{') ||
                (c == ']' && p.top() != '['))
            {
                return false;
            }
            else
                p.pop();
        }
    }
    return p.empty();
}

int main()
{
    string s;
    getline(cin >> ws, s);
    (check(s)) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    return 0;
}
