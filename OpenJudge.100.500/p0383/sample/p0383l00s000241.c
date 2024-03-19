#include<stdio.h>
 
int main()
{
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    long A[n][m],B[m][l],C[n][l];
    //A scanf　関数化したい
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%ld",&A[i][j]);
        }
    }
    //B scanf 関数化したい
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<l;j++)
        {
            scanf("%ld",&B[i][j]);
        }
    }
    //C printf
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            C[i][j] = 0;
            for(int x=0;x<m;x++)
            {
                C[i][j] += A[i][x] * B[x][j];
            }
            if(j != l-1){
                printf("%ld ",C[i][j]);
            }else {
                printf("%ld",C[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
