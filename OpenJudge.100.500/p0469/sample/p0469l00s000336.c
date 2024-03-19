#include <stdio.h>
#include <stdlib.h>

int main(int argc,char ** argv){
  int A,B,K;
  scanf("%d",&K);
  scanf("%d %d",&A,&B);
  if(K<1 || K >1000 || A <1 || B <1 || A >1000 || B > 1000)
  exit(1);

  if(K > B)printf("NG");
  if(K <= B && K >=A)printf("OK");
  if(K > B/2 && K < A)printf("NG");
  if(K <= B/2 && K >= 1)printf("OK");

  return 0;
}