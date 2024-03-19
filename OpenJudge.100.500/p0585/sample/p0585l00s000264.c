#include <stdio.h>
 
int main(){
  int A,B,T;
  scanf("%d%d%d",&A,&B,&T);
  int kai = (int)(((double)T+0.5)/(double)A);
  
  printf("%d\n",kai*B);
  
  return 0;
}