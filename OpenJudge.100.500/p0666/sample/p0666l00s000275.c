#include <stdio.h>

int main(void)
{
  long long int X,A,B,Y;

  scanf("%lld %lld %lld",&X,&A,&B);
  Y = A - B;

  if(Y >= 0)
    printf("delicious\n");
  else if(-Y <= X)
    printf("safe\n");
  else
    printf("dangerous\n");

  return 0;
}

