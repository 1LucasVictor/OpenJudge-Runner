#include<stdio.h>

int main()
{
  int N;
  int n;
  
  scanf("%d",&N);
  n=N%10;
  if(n==3)
  {
    printf("bon");
  }
  else if(n==0 || n==1 || n==6 || n==8)
  {
    printf("pon");
  }
  else
  {
    printf("hon");
  }
}