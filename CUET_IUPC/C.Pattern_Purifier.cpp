/**
 *    author  : lucifer
 *    created : 2025-12-14 21:23:19
 *    motto   : Why so serious? ❄️
**/

#include <bits/stdc++.h>
using namespace std;

using i16  = short;
using i32  = int;
using i64  = long long;
using u32  = unsigned;
using u64  = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;
using f32  = float;
using f64  = double;
using f80  = long double;

using str   = string;
using wstr  = wstring;
using str16 = u16string;
using str32 = u32string;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define elif else if
#define endl '\n'
#define lucifer int main()

lucifer {
    fast_io;

    i32 test_cases = 1;
    cin >> test_cases;

    while (test_cases --> 0)
    {
        str s;
        cin >> s;
        stack<char> p;
        for(char c : s){
            if(!p.empty() && p.top() == c){
                p.pop();
            }
            else
                p.push(c);
        }
        (p.empty()) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
