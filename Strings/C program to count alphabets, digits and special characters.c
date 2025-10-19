#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000];
    int Al_count = 0, D_count = 0, SP_count = 0;
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            D_count++;
        }
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            Al_count++;
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
        {
            Al_count++;
        }
        else
            SP_count++;
    }
    printf("Alphabets: %d\nDigits: %d\nSpecial_char: %d\n", Al_count, D_count, SP_count);
    return 0;
}
