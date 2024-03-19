#include<stdio.h>
 
int main(void){
  int X,A,B;
  if(scanf("%d %d %d",&X,&A,&B));
  if(X>=1 && X<=1000000000 && A>=1 && A<=1000000000 && B>=1 && B<=1000000000){
    if(X<(B-A))
      printf("dangerous");
    else if(A>=B)
      printf("delicious");
    else
      printf("safe");
  }
  return 0;
}