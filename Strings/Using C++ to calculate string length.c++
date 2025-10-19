#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int count = 0;
    cin >> S;
    for (int i = 0; S[i] != '\0'; i++)       //'\0' is null character
    {
        count++;
    }
    cout << count << endl;
    return 0;
}
