#include<stdio.h>

#define MAX_MATRIX 100

int main(void)
{
        int n, m, c, matrix_a[MAX_MATRIX][MAX_MATRIX], matrix_b[MAX_MATRIX];
        int i,j;

        // initialize matrix_a, matrix_b
        for(i=0; i < MAX_MATRIX; i++)
        {
                for(j=0; j < MAX_MATRIX; j++)
                {
                        matrix_a[i][j] = 0;
                }
                matrix_b[i] = 0;
        }


        //input matrix size
        scanf("%d %d", &n, &m);

        // input matrix_b
        for(i=0; i < n; i++)
        {
                for(j=0; j < m; j++)
                {
                        scanf("%d", &c);
                        matrix_a[i][j] = c;
                }
        }

        // input matrix_b
        for(i=0; i < m; i++)
        {
                scanf("%d", &c);
                matrix_b[i] = c;
        }

        // print output
        for(i=0; i < n; i++)
        {
                c = 0;

                for(j=0; j < m; j++)
                {
                        c += matrix_a[i][j] * matrix_b[j];
                }

                printf("%d\n", c);
        }

        return 0;
}
