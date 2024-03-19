#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,k,p,q;
    scanf("%d",&n);
    scanf("%d",&m);
    k=(n+m)/2;
    p=abs(n-k);
    q=abs(m-k);
    if(p==q)
    {
        printf("%d\n",k);
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}

