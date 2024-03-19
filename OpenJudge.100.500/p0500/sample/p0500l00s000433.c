#include<stdio.h>
int n,m,a[12],b[12],c[4][2],f[4];
int main()
{
    scanf("%d%d",&n,&m);
    if(m==0)
    {
        if(n==1)
            printf("0");
        else
            printf("-1");
        return 0;
    }
    for(int i=1;i<=m;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=m;i++)
    {
        if(a[i]==1&&b[i]==0)
        {
            printf("-1");
            return 0;
        }
        c[a[i]][0]=b[i];
        if(c[a[i]][1]&&c[a[i]][0]!=f[a[i]])
        {
            printf("-1");
            return 0;
        }
        c[a[i]][1]++;
        f[a[i]]=b[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i==1&&!c[1][0])
        {
            printf("1");
        }
        if(i==1&&c[1][0])
            printf("%d",c[1][0]);
        else if(i!=1)
            printf("%d",c[i][0]);
    }
    return 0;
}
