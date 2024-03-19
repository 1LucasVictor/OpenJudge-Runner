#include<stdio.h>
#include<stdlib.h>

int
main(int argc, char *argv[])
{
        int n, m, l;
        int *A, *B, *C;
        int *itr, *itrA, *itrB;
        int i, j, k;

        scanf("%d %d %d", &n, &m, &l);
        A = (int *)malloc(n * m * sizeof(int));
        B = (int *)malloc(m * l * sizeof(int));
        C = (int *)malloc(n * l * sizeof(int));

        itr = A;
        for (i = 0; i < n * m; i++)
                scanf("%d", itr++);
        itr = B;
        for (i = 0; i < m; i++) {
                for (j = 0; j < l; j++) {
                        scanf("%d", itr);
                        itr += m;
                }
                itr -= m * l - 1;
        }

        itr = C;
        for (i = 0; i < n; i++) {
                for (j = 0; j < l; j++) {
                        itrA = A + m * i;
                        itrB = B + m * j;
                        for (k = 0; k < m; k++)
                                *itr += *itrA++ * *itrB++;
                        itr++;
                }
        }
        itr = C;
        for (i = 0; i < n; i++)
                for (j = 0; j < l; j++)
                        printf("%d%c", *itr++, (j == l - 1)? '\n': ' ');


        return 0;
}