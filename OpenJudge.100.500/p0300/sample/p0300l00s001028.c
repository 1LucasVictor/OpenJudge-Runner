#include <stdio.h>
int main(void)
{
    int n,S[10000],q,T[500],C,i,j;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&S[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&T[i]);
    }
    
    C=0;
    for(i=0;i<q;i++)
    {
        for(j=0;j<n;j++)
        {
            if(T[i]==S[j]) C++;
        }
    }
    
    printf("%d\n",C);
    
    return 0;
}

