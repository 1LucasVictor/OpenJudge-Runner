#include<stdio.h>
main(){
  int N, A, B, C;
  
  scanf("%d%d%d",&N,&A,&B);
  C = N*A;
  
  if(C >= B)
    printf("%d\n",B);
  else
    printf("%d\n",C);
  
}