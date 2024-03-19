#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char s[3];
    int i = 0, count = 0;
    char c;
    for (i = 0; i < 3; i++)
    {
        scanf("%c", &c);
        s[i] = c;
    }
    for (i = 1; i < 3; i++)
    {
        if (s[i] != s[i - 1])
            count++;
    }
    if (count)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}