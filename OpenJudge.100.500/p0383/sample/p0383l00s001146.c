#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, l;

    scanf("%d %d %d", &n, &m, &l);

    int matrix1[n][m];
    int matrix2[m][l];
    unsigned int matrix3[n][l];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            matrix3[i][j]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for(int k=0;k<m;k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }

            printf("%u",matrix3[i][j]);
            if(j==l-1)printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
