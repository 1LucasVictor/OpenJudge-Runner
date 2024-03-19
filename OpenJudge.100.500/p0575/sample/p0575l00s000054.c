#include<stdio.h>
int main(void){
  int X,A,result;
  scanf("%d%d",&X,&A);
  if(X<A){
      result = 0;
  }else{
      result = 10;
  }
  printf("%d",result);
  return 0;
}