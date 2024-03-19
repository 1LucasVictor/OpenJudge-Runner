#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d",&n);
  if(n%2==0)
  {
    m = n/2;
  }
  else
  {
      m = n/2 + 1;
  }
  printf("%d",m);
  return 0;
}
