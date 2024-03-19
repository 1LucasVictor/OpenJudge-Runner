#include <stdio.h>
#include <stdlib.h>
 
int main(void){
  int N,a=0,b=0;
  scanf("%d",&N);
  
  int A[N];
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  
  for(int i=0; i<N; i++){
      if(A[i]%2==0){
        a++;
      }
  }
  
  for(int i=0;i<N;i++){
    if(A[i]%2==0){
      if(A[i]%6==0 || A[i]%10==0){
        b++;
      }
    }
  }
  if(a==b){
    printf("APPROVED\n");
  }
  else{
    printf("DENIED\n");
  }
  return 0;
}
      