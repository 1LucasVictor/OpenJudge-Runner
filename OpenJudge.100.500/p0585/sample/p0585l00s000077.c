#include <stdio.h>

int main(){
  int A,B,T;
  int num;
  
  scanf("%d %d %d",&A,&B,&T);
  
  num = T/A;
  printf("%d\n",num*B);
  
  return 0;
}