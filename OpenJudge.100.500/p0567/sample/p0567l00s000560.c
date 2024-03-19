#include<stdio.h>
int main()
{
  int A,B,C,D;
  scanf("%d %d %d",&A,&B,&C);
  D=C-(A-B);
  if(D<0)
  {
    printf("0");
  }
  else
  {
    printf("%d",D);
  }
} 