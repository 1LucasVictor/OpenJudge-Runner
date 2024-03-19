#include<stdio.h>
int main(void)
{
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  if(A>=B+C)
    printf("%d\n",0);
  else
    printf("%d\n",C-A+B);
  return 0;
}