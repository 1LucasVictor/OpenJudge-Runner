#include <stdio.h>

int bubbleSort(int A[], int N){
  int i, j, tmp;
  int c;
  for(i=0; i<(N - 1); i++){
    for(j=(N - 1); j>i; j--){
      if(A[j-1] > A[j]){
        tmp = A[j-1];
        A[j-1] = A[j];
        A[j] = tmp;
        c++;
      }
    }
  }
  return c;
}

void printSort(int A[], int N, int c){
  int a;
  for(a=0; a<N; a++){
    printf("%d", A[a]);
    if(a == N-1) break;
    printf(" ");
  }
  printf("\n%d\n", c);
}

int main(){
  int N, count;
  scanf("%d", &N);
  int A[N];
  int x,i, n=0;
  for(i=0; i<N; i++){
    scanf("%d", &x);
    A[n] = x;
    n++;
  }
  count = bubbleSort(A, N);
  printSort(A, N, count);
}