#include<stdio.h>
int main()
{
  int n,s;
  scanf("%d",&n);
  if(n>9)
  {
    s=n%10;
    if(s==2 || s==4 || s==5 || s==7 || s==9)
    {
      printf("hon");
    }
    if(s==0 || s==1 || s==6 || s==8)
    {
      printf("pon");
    }
    if(s==3)
    {
      printf("bon");
    }
  }
  else
  {
     if(n==2 || n==4 || n==5 || n==7 || n==9)
    {
      printf("hon");
    }
    if(n==0 || n==1 || n==6 || n==8)
    {
      printf("pon");
    }
    if(n==3)
    {
      printf("bon");
    }
  }
}