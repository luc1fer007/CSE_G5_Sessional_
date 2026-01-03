#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%[^\n]", s);
    int freq[256] = {0};
    char result;
    int max = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[(unsigned char)s[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            result = (char)i;
        }
    }
    printf("Maximum char : %c\n", result);
    printf("Occur : %d\n", max);
    return 0;
}

//Optimized using STL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    unordered_map<char, int> m;
    int count = 0;
    char ans;
    for (int c : s)
    {
        m[c]++;
        if (count < m[c])
        {
            ans = c;
            count = m[c];
        }
    }
    cout << ans << '\n';
    return 0;
}
