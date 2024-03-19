#include <stdio.h>
int main(void)
{
  int A,B,c,d;
  scanf("%d%d",&A,&B);
  
  if(B%A==0)
  {
    c=A+B;
    printf("%d",c);
  
  }
  
  else
  {
    d=B-A;
    printf("%d",d);
  }
  
  return 0;
}
