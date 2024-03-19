#include<stdio.h>
int main()
{
    int t,i,j,q,a[100];
    while(scanf("%d",&t)!=EOF && t>=1)
    {int c=0;
    for(i=0;i<=t-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=t-1;i++)
    {
        for(j=t-1;j>=i+1;j--)
        {
    if(a[j]<a[j-1])
    {
        q=a[j];
        a[j]=a[j-1];
        a[j-1]=q;
        c++;
    }
    }
    }
    for(i=0;i<=t-1;i++)
    {
        printf("%d ",a[i]);
    }
      printf("\n%d\n",c);
}
}