#include<stdio.h>
int A,B,C,X[105][105],Y[105][105],i,j,k;
long long t;
int main()
{
    scanf("%d%d%d",&A,&B,&C);
    for(i=0;i<A;i++)
        for(j=0;j<B;j++)
            scanf("%d",&X[i][j]);
    for(i=0;i<B;i++)
        for(j=0;j<C;j++)
            scanf("%d",&Y[i][j]);
    for(i=0;i<A;i++)
    {
        for(j=0;j<C;j++)
        {
            for(k=t=0;k<B;k++)
                t+=X[i][k]*Y[k][j];
            printf("%lld%s",t,j==C-1?"\n":" ");
        }
    }
    return 0;
}
