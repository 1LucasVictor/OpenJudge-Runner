#include<stdio.h>
int main()
{
    int i,j,m,n,k,l;
    scanf("%d %d",&m,&n);
    int x[m][n],y[n][1],z[m][1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i][0]);
    }
    for(i=0;i<m;i++)
    {
        z[i][1]=0;
        for(j=0;j<n;j++)
        {
           z[i][1]+=x[i][j]*y[j][0];
        }
        printf("%d\n",z[i][1]);
    }
    return 0;
}
