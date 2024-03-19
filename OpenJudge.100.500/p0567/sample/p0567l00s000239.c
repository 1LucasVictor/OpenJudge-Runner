#include<stdio.h>
int main(void)
{
  int A,B,C;
  int sum;
  
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  
  sum=C-(A-B);
  
  if(sum>0)
    printf("%d",sum);
  else
    printf("%d",0);
  return 0;
}
