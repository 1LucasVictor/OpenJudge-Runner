#include<stdio.h>
int main(){
  int K,A,B;
  scanf("%d%d%d",&K,&A,&B);
  if(A/K!=B/K)
    printf("OK\n");
  else if(A%K==0)
    printf("OK\n");
  else
    printf("NG\n");
  return 0;
}