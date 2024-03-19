#include<stdio.h>

void main(void){
  int A,B,n=1,x;
  
  scanf("%d%d",&A,&B);
  x=A;
  while(x<B){
    x=x+A-1;
    n+=1;
  }
  printf("%d\n",n);
}
