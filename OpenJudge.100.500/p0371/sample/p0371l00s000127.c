#include <stdio.h>

int main(void)
{
  int n,a,i,min,max,sum;
  sum=0;
  min=1000000;
  max=-1000000;

  scanf("%d",&n);
  for(i=1; i<=n; i++){
  scanf("%d", &a);
  sum+=a;
  if ( a < min )
  min=a;
  else if ( a > max )
  max=a;
  }
  printf("%d %d %d\n",min,max,sum);

  return 0;
}