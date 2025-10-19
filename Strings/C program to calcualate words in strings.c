#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int Wordcount = 0;
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            Wordcount++;
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
        {
            Wordcount++;
        }
    }
    printf("%d\n", Wordcount);
    return 0;
}
