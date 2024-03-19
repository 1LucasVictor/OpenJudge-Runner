#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_MAX 200000

long long A[N_MAX];

int comp(const void *a, const void *b)
{
    long long v1 = *((long long *)a);
    long long v2 = *((long long *)b);

    if (v1 < v2) {
      return 1;
    } else if (v1 > v2) {
      return -1;
    } else {
      return 0;
    }
}

int main(void)
{
    int N;
    int i;
    int flag = 1;

    scanf("%d", &N);
    for ( i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    qsort(A, N, sizeof(long long), comp);

    for ( i = 0; i < ( N - 1 ); i++ ){
        if ( A[i] == A[i + 1]) {
            flag = 0;
            break;
        }
    }

    if ( flag == 1 ) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}