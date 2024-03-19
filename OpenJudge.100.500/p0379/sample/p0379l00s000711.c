#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],C[100][100],m,n,i,j,k,sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&B[i][0]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",C[i][0]);
    }
    return 0;
}

