#include <stdio.h>
int main(){
  int A,B,C,K,S=0;
  scanf("%d %d %d %d",&A,&B,&C,&K);
  if(K<=A) S=K;
  else if(K<=A+B) S=A;
  else S=A-(K-A-B);
  printf("%d\n",S);
  return 0;
}