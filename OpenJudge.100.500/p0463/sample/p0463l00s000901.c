#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int store=n%10;
  if(store==2 || store==4 || store==5 || store==7 || store==9)
  {
    printf("hon\n");
  }
  else if(store==0 || store==1 || store==6 || store==8)
  {
    printf("pon\n");
  }
  else
  {
    printf("bon\n");
  }
}
    