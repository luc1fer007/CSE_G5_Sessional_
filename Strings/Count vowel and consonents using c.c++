#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%[^\n]", s);
    int len = strlen(s);
    int V_count = 0, Con_count = 0;
    for (int i = 0; i < len; i++)
    {
        if ('a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] || 'u' == s[i] ||
            'A' == s[i] || 'E' == s[i] || 'I' == s[i] || 'O' == s[i] || 'U' == s[i])
        {
            V_count++;
        }
        else
            Con_count++;
    }
    printf("Vowels: %d\nConsonants: %d\n", V_count, Con_count);
    return 0;
}
