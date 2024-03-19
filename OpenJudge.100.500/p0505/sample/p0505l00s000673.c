#include<stdio.h>

int main()
{
  int h = 0;
  int n = 0;
  int sum = 0;


  scanf("%d %d",&h,&n);
    int dat[n];
    for(int i = 0;i < n;i++)
  {
    scanf("%d",&dat[i]);
    sum += dat[i];
  }
  
  if(sum >= h)
  {
  printf("Yes");
  }
  else
  {
    printf("No");
  }

    return 0;
}