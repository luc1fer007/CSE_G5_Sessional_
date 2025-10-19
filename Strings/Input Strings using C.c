#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], p[100];
    scanf("%s", p);
    printf("%s\n", p); // use a single string
    getchar();         // to ignore new line
    scanf("%[^\n]", s);
    printf("%s\n", s); // use a full string with spaces
    return 0;
}
