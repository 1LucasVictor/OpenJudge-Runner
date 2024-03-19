#include <stdio.h>
int cmpfunc (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}
int main(){
  int N, A[200001];
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &A[i]);
  }
  
  qsort(A, N, sizeof(int), cmpfunc);
  for(int i=0; i<N-1; i++){
    if(A[i]==A[i+1]){
      printf("NO");
      return 0;
    }
  }
  
  printf("YES");
  return 0;
}