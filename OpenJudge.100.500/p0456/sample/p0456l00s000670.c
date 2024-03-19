#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long

int main(void)
{
    char s[200002];
    char t[200002];
    int i, count = 0;
    scanf("%s", s);
    scanf("%s", t);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != t[i])
            count++;
    }
    printf("%d\n", count);
    return 0;
}