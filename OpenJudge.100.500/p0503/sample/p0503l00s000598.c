#include<stdio.h>

int main(void){
  int N;
  int A[200001];
  int flag = 0;

  scanf("%d",&N);

  for(int i = 0; i < N; i++){
    scanf("%d",&A[i]);
  }

  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      if(A[i] == A[j]){
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
