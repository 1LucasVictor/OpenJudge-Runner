#include <stdio.h>

int main(void){
  int N;
  int i, j, v;
  scanf("%d\n", &N);
  int A[N];
  for (i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }

  //Insertion Sort
  for (i = 0; i < N; i++){
    v = A[i];
    j = i - 1;
    while(j >= 0 && A[j] > v){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;

    for (int k = 0; k < N; k++){
      printf("%d ", A[k]);
    }
    printf("\n");
  }

  return 0;
}
