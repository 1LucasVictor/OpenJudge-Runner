#include <stdio.h>

int main(void){
  int N,A[200000],i,l,a;
  a = 0;
  scanf("%d",&N);
  
  for(i = 0; i < N; i++){
    scanf("%d",&A[i]);
  }
  for(i = 0; i < N - 1; i++){
    for(l = i + 1; l < N; l++){
      if (A[i] == A[l]){
         a = 1;
        printf("NO");
        break;
      }
    }
  }
  if (a != 1){
    printf("YES");
  }
  return 0;
  }