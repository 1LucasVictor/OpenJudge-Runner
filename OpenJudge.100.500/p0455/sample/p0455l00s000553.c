#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  int sum=0;
  scanf("%d",&n);
  
  sum=n+pow(n,2)+pow(n,3);
  
  printf("%d\n",sum);
  
  return 0;
}