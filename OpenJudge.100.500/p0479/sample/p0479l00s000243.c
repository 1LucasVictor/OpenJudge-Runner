#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
 
int main(void)
{
    int N, i=1, j=1, t=0, k=1;
    
    scanf("%d", &N);
    int A[N], B[N];
    A[0] = 0;
    B[N-1] = 0;
 
    for(i=0; i<N-1; i++) {
        B[i] = 0;
    }
 
    for(i=1; i<N; i++) {
        scanf("%d", &A[i]);
    }
 
    qsort(A, sizeof(A) / sizeof(int), sizeof(int), asc);
    
    for(i=k; i<N; i++) {
        for(j=t; j<N; j++) {
            if(i == A[j]) {
                B[i-1]++;
            } else if(i < A[j]){
                t = j;
                k = A[j];
                break; 
            }
        }
        if(t == N-1) {
            break;
        }
    }
    
 
    for(i=0; i<N; i++) {
        printf("%d\n",B[i]);
    }
 
 
    return 0;
}