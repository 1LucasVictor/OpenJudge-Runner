#include<stdio.h>

int main(void){
  int A,B,n=1,x;
  scanf("%d %d",&A,&B);
  if(B==1){
    printf("0");
    return 0;
  }
  x=A;
  while(x<B){
    x=x+A-1;
    n+=1;
  }
  printf("%d\n",n);
  
  return 0;
}