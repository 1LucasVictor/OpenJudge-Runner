#include<stdio.h>
 
int main(void){
  int A,B,i;
  scanf("%d %d",&A,&B);
 
  for(i=1;(A-1)*(i-1)+A<B;i++){}
  printf("%d\n",i);
      
      
  return 0;
}
