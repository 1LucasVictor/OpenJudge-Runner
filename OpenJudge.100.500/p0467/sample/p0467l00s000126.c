#include<stdio.h>
int main(){
  int A,B,C,K;
  scanf("%d %d %d %d",&A,&B,&C,&K);
  if(K<=A){printf("%d",A);}
  else if(K<=A+B){printf("%d",A+C-C);
  }
      else{printf("%d",A-K+A+B);}
      
  return 0;
}