#include <stdio.h>
int main (){
  int A,B,K;
  scanf("%d",&K);
  scanf("%d",&A);
  scanf("%d",&B);
  for(;A<=B;A++){
    if(A%K==0){
      printf("OK");
      return 0;
      }
    }
  printf("NO");
  return 0;
  }