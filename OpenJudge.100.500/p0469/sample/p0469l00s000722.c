#include<stdio.h>
#include<stdlib.h>

int main (void){
  
  int K,A,B;
  scanf("%d%d%d",&K,&A,&B);
  int count=0;
  
  for(int i=A;i<=B;i++){
    if(i % K == 0) count++;
  }
  
  if (count>0) printf("OK");
  else printf("NG");
  
  return 0;
}