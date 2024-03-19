#include <stdio.h>
 
int main(void) {
    int A[100][100];
    int B[100];
    int m, n, i, j, Product;
    Product=0;
    scanf("%d%d", &n, &m);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        scanf("%d", &B[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            Product+=A[i][j]*B[j];
        }
        printf("%d\n", Product);
        Product=0;
    }
    return 0;
}
