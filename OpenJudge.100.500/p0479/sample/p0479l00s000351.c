#include <stdio.h>
#include <stdlib.h>
#define max 2*100000
int j=1;

int bossy(int x,int n,int boss[])
{
    int dabang=0;

    for(;j<n;j++)
    {
        if(boss[j]==x)dabang++;
        if(boss[j]>x)break;
    }
    return dabang;
}
int main()
{
   int n,i,boss[max];
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       scanf("%d",&boss[i]);
   }
   for(i=1;i<=n;i++)
   {
       printf("%d\n",bossy(i,n,boss));
   }
    return 0;
}
