#include<stdio.h>
int main()
{
    int n,m,l,i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    int x[n][m],y[m][l];
    long long s=0,z[n][l];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            for(k=0;k<m;k++)
            {
                s=s+x[i][k]*y[k][j];
            }
            z[i][j]=s;
            s=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<l-1;j++)
        {
            printf("%lld ",z[i][j]);
        }
        for(j=l-1;j<l;j++)
        {
            printf("%lld\n",z[i][j]);
        }
    }
    return 0;
}
