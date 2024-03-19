#include<stdio.h>
int main(void)
{
  int a,b,c,x,y;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  x=a-b;
  y=c-x;
  
  if(y>0)
  {
    printf("%d",y);
  }
  else{
    printf("0\n");
  }
  
  return 0;
}