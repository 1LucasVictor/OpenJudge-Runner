#include<stdio.h>
int main(void)
{
int A,B;
int x;
  scanf("%d",&A);
  scanf("%d",&B);
  
  if(B%A==0)
    x=B+A;
  else
    x=B-A;
  
  printf("%d",x);
  return 0;
}