#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int count = 0;
    scanf("%[^\n]", s); // don't use &s cause s himself is the address
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
