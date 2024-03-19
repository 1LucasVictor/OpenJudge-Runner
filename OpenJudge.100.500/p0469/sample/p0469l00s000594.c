#include<stdio.h>

int main(void){
  int K,A,B;
  
  scanf("%d",&K);
  scanf("%d%d",&A,&B);
  
  puts(A%K<=(B-A) ? "OK" : "NG");
  
  return 0;
  
}
  