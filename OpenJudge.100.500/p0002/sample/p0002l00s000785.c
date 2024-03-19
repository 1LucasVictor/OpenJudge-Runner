#include<stdio.h>
int main()
{
    int a[3],t,i,j,k,max,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }
        if(a[0]>a[1]&&a[0]>a[2])
            max=a[0];
        else if(a[1]>a[2]&&a[1]>a[0])
        {
            k=a[0];
            a[0]=a[1];
            a[1]=k;
        }
        if(a[2]>a[0]&&a[2]>a[1])
        {
            k=a[2];
            a[2]=a[0];
            a[0]=k;
        }
        if(a[0]*a[0]==(a[1]*a[1])+(a[2]*a[2]))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}