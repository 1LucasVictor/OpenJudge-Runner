#include<stdio.h>

int main(){
  
  int A,B;
  scanf("%d%d",&A,&B);
  
  int max = A + B;
  if(A - B > max) max = A - B;
  if(A * B > max) max = A * B;
  
  printf("%d",max);
  return 0;
  
}