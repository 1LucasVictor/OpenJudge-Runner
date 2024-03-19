#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N;
  scanf("%d",&N);
  
  int A[N];
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  
  for(int i=0;i<N;i++){
    if(A[i]%6==0 || A[i]%10==0){
      printf("APPROVED\n");
      exit(1);
    }
  }
  
  printf("DENIED\n");
return 0;
}
  