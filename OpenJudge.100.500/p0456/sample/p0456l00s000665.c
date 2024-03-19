#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0;
    char S[2*10*10*10*10*10],T[2*10*10*10*10*10];
    scanf("%s",S);
    scanf("%s",T);

    for (int i=0; i<strlen(S);i++)
    {
        if (S[i]!=T[i]) {n++;}
    }
    printf("%d\n",n);
    return 0;
}