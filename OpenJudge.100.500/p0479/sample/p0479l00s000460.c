#include<stdio.h>
int main()
{
    int a,b,c,d,n,i;
    scanf("%d",&n);
    int ar[n+1];
    for(i=1;i<=n;i++)
    {
        ar[i]=0;
    }
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        ar[a]++;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",ar[i]);
    }
}
