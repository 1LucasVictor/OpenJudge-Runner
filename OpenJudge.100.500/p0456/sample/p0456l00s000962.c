#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char S[10 * 5];
    char T[10 * 5];
    int n=0;
    scanf("%s", S);
    scanf("%s", T);

    for (int i = 0; i < strlen(T); i++)
    {
        if (S[i] != T[i])
        {
            n++;
        }
    }
    putchar('\n');
    printf("%d\n", n);
}