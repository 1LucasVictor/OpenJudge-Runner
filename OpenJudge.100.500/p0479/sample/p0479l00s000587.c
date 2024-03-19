#include <stdio.h>
int main() {
    int i, j, N;
    scanf("%d", &N);
    int A[20000], B[20000];
    for(i=2; i<N+1; i++) {
      scanf("%d", &A[i]);
    }
    for(i=1; i<N+1; i++){
      B[i] = 0;
      for(j=2; j<N+1; j++){
        if(A[j]==i) B[i]++;
      }
      printf("%d\n", B[i]);
    }
  return 0;
}