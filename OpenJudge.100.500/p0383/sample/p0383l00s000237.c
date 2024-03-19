#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **mat_a, **mat_b;
    long long int **mat_c;
    int n, m, l, i, j, k, sum;

    scanf("%d %d %d", &n, &m, &l);

    mat_a = (int **)malloc(sizeof(int *) * n);
    for (i=0; i<n; i++) {
        mat_a[i] = (int *)malloc(sizeof(int) * m);
    }

    mat_b = (int **)malloc(sizeof(int *) * m);
    for (i=0; i<m; i++) {
        mat_b[i] = (int *)malloc(sizeof(int) * l);
    }

    mat_c = (long long int **)malloc(sizeof(long long int *) * n);
    for (i=0; i<n; i++) {
        mat_c[i] = (long long int *)malloc(sizeof(long long int) * l);
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &mat_a[i][j]);
        }
    }
    
    for (i=0; i<m; i++) {
        for (j=0; j<l; j++) {
            scanf("%d", &mat_b[i][j]);
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<l; j++) {
            mat_c[i][j] = 0;
            for (k=0; k<m; k++) {
                mat_c[i][j] += mat_a[i][k] * mat_b[k][j];
            }  
        }
    }

    for (i=0; i<n; i++) {
        printf("%lld", mat_c[i][0]);
        for(j=1; j<l; j++) {
            printf(" %lld", mat_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
