#include<stdio.h>

int main(void)
{
  int A,X;
  scanf("%d %d",&X,&A);
  if(X < A)printf("0");
  if(X >= A)printf("10");
  
  return 0;
}