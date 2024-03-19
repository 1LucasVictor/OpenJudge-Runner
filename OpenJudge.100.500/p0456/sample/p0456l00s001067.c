#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[10000], t[10000];
    int l, i, count = 0;

    scanf("%s %s", &s, &t);

    l = strlen(s);
    
    for (i = 0; i < l; i++)
    {
        if (s[i] != t[i]) count++;
    }

    printf("%d", count);
    
    return 0;
}