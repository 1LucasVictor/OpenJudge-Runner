#include<stdio.h>
int main(void){
  int N, b, c = 0;
  scanf("%d", &N);
  int A[N];
  for(int i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }
  for(int j = 0; j < N; j++){
    for(int k = j + 1; k < N; k++){
      if(A[j] > A[k]){
        b = A[j];
        A[j] = A[k];
        A[k] = b;
      }
    }
  }
  for(int l = 0; l < N - 1; l++){
    b = l + 1;
    if(A[l] == A[b]) c += 1;
  }
  if(c > 0) printf("NO\n");
  else printf("YES\n");

  return 0;
}