#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0;
    char S[2000],T[2000];
    scanf("%s",S);
    scanf("%s",T);

    for (int i=0; i<strlen(S);i++)
    {
        if (S[i]!=T[i]) {
            S[i]=T[i];
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}