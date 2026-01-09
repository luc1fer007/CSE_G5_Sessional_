#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (st.empty())
            {
                cout << "Not a balanced parenthesis" << endl;
                return 0;
            }
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {
                cout << "Not a balanced parenthesis" << endl;
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }
    cout << (st.empty() ? "Yes a balanced parenthesis\n" : "Not a balanced parenthesis");
    return 0;
}
