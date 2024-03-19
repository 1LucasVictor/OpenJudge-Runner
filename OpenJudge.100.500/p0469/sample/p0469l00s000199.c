#include<stdio.h>

int main(){
  int A,B,K;
  scanf("%d%d%d",&K,&A,&B);
  if(B-A>=K||B%K-A%K<0)printf("OK");
  else printf("NG");
};