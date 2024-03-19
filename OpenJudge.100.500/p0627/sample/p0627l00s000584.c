#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,i,j,a,k;
    while(~scanf("%d %d",&n,&m))
    {
        i=n+m;
        j=n*m;
        a=n-m;
        if(i>j&&i>a)
        {
            printf("%d\n",i);
        }
        if(a>i&&a>j)
        {
            printf("%d\n",a);
        }
        if(j>a&&j>i)
        {
            printf("%d\n",j);
        }
        if(n==0&&m==0)
        {   k=0;
            printf("%d\n",k);
        }
    }
    return 0;
}
