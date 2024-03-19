#include<stdio.h>
#include<string.h>

void main()
{
    char S[2*100000],T[2*100000];
    int i,j,l;
    
    scanf("%s",S);
    scanf("%s",T);
    l=strlen(S);
    
    for(i=0;i<l;i++)
    {
        if(S[i]!=T[i])
        {
            j++;
        }
    }
    printf("%d\n",j);
}