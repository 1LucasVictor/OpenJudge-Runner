#include<stdio.h>
#include<stdlib.h>

int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}



int main(){
    int N;
    scanf("%d", &N);

    int i,j,tmp;
    int A[200000+1] = {0};
    for( i = 0; i < N; i++ ){
        scanf("%d", &A[i]);
    }

    qsort(A, N, sizeof(A[0]), asc);
/*
    for( i = 0; i < N; i++ ){
        for( j = i+1; j < N; j++ ){
            if( A[i] > A[j] ){
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
*/
    

    for( i = 0; i < N-1; i++ ){
        if( A[i] == A[i+1] ){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}



