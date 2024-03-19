#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S[30];
    char T[30];
    int count = 0;

    scanf("%s", S);
    scanf("%s", T);

    for (size_t i = 0; i <= strlen(S); i++)
    {
        if (S[i]!=T[i])
            count+=1;
    }

    printf("%d",count);
}