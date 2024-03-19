#include<stdio.h>
int main()
{
    int n,i,m,t,j;
    int a[100000]={0};
    int count[100000];
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        if(count[a[i]]<count[a[j]])
        {
            t=count[a[i]];
            count[a[i]]=count[a[j]];
            count[a[j]]=t;
        }
    }
    for(i=1;i<n+1;i++)
    {
        printf("%d\n",count[i]);
    }
    return 0;
}
