#include<stdio.h>

int main()
{
  int i,ans;
  
  scanf("%d", &i);
  ans = i/500*1000;
  ans += (i - i/500*500)/5*5;
  printf("%d", ans);
  return(0);
}