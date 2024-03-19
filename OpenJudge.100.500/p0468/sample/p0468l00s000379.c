#include <stdio.h>
#include <string.h>

int main()
{
    char s[5];

    scanf("%s", s, 4);

    if (strcmp(s,"ABC")==0)
    {
        printf("ARC\n");
    }
    else
    {
        printf("ABC\n");
    }
    return 0;
}