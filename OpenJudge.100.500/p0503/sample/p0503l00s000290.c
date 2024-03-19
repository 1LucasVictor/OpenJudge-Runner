#include<stdio.h>
#include<stdlib.h>

int main(void){
  int N;
  int *A;
  int flag = 0;

  scanf("%d",&N);

  A = (int *)malloc(N);
   if(A == NULL) {
      exit(EXIT_FAILURE);
   }

  for(int i = 0; i < N; i++){
    scanf("%d",&A[i]);
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){

      if(A[i] == A[j]){
        if(i == j)continue;

        flag = 1;
        goto end;
      }
    }
  }

  end:
  if(flag == 1){
    printf("N0\n");
  }
  else if(flag == 0){
    printf("YES\n");
  }

  return 0;
}
