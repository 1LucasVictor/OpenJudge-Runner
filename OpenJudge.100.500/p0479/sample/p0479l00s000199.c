#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main(void)
{
    int N, i=1, j=0;
    
    scanf("%d", &N);
    int A[N], B[N];
    A[0] = 200001;
    B[N-1] = 0;

    for(i=0; i<N-1; i++) {
        B[i] = 0;
    }

    for(i=1; i<N; i++) {
        scanf("%d", &A[i]);
    }

    qsort(A, sizeof(A) / sizeof(int), sizeof(int), asc);
    
    

    for(i=1; i<N; i++) {
        for(j=i-1; j<N; j++) {
            if(i == A[j]) {
                B[i-1]++;
            } else if(i < A[j]){
                break;
            }
        }
    }
    

    for(i=0; i<N; i++) {
        printf("%d\n",B[i]);
    }


    return 0;
}
