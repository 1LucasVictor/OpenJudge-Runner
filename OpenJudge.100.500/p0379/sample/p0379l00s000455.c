#include <stdio.h>
#include <stdlib.h>
 
int
main(int argc, char *argv[])
{
        int n, m;
        int *A;
        int *b;
        int *itrA, *itrb;
        int i, j;
        int tmp;
 
        scanf("%d %d", &n, &m);
        A = (int *)malloc(n * m * sizeof(int));
        b = (int *)malloc(m * sizeof(int));
         
        /* Read A */
        itrA = A;
        for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                        scanf("%d", itrA++);
        /* Read b */
        itrb = b;
        for (i = 0; i < m; i++)
                scanf("%d", itrb++);
 
        for (i = 0; i < n; i++) {
                tmp = 0;
                itrA = A + i * m;
                itrb = b;
                for (j = 0; j < m; j++)
                        tmp += *itrA++ * *itrb++;
                printf("%d\n", tmp);
        }
         
        return 0;
}

