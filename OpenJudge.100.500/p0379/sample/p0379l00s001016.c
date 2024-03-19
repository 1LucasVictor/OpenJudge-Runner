#include <stdio.h>
int main()
{
    int i,j,k,n,m;
    int mat1[100][100],mat2[100], matnew[100];
    scanf("%d%d",&n,&m);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        scanf("%d",&mat2[i]);

    }
    for (i=0; i<n; i++)
    {
        matnew[i]=0;
        for(j=0; j<m; j++)
        {
            matnew[i]+=mat1[i][j]*mat2[j];
        }

    }
    for(i=0; i<n; i++)
    {

        printf("%d\n",matnew[i]);

    }
        return 0;
}

