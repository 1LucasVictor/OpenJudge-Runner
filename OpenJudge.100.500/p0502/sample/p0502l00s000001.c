#include <stdio.h>

int main(){
  int A[1000];
  int N,i;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    if(A[i]%2==0){
      if(A[i]%3!=0 && A[i]%5!=0){
        printf("DENIED");
        return 0;
      }
    }
  }
  printf("APPROVED");
  return 0;
}