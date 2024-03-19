#include <stdio.h>
int main(){
  int A,B,C,K,x;
  scanf("%d %d %d %d",&A,&B,&C,&K);
  if(K<A){x=K;}
  else if(K>A+B){x=A-(K-(A+B));}
  else{x=A;}
  printf("%d",x);
  return 0;
}