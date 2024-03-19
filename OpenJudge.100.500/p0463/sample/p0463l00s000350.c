#include <stdio.h>
int main(void)
{
  int x;
  scanf("%d",&x);
  x %= 100;
  x %= 10;
  
  if(x==2 || x==4 || x==5 || x==7 || x==9)
    printf("hon\n");
  else if(x==0 || x==1 || x==6 || x==8)
    printf("pon\n");
  else if(x==3)
    printf("bon\n");
  
  return 0;
}