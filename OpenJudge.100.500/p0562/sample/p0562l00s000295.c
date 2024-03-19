#include<stdio.h>
int main(void)
{
  int A,B,i,total;
  total=0;
  scanf("%d",&A);
  scanf("%d",&B);
  for(i=0;total<B;i++)
  {
    total=A*i-(i-1);
  }
  printf("%d\n",i-1);
  return 0;
}
  
  