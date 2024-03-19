#include<stdio.h>
#include<stdlib.h>
int main ()
{
  int A,B,C,D;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  D=C-A+B;
  if(D<0)
  {
    D=0;
  }
  printf("%d",D);
}
