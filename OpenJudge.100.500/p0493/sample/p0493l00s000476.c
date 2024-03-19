#include<stdio.h>
int main()
{
  unsigned long N;
  scanf("%lu",&N);
  unsigned long hun,one,tmp,sum;
  hun=N/500;
  tmp=N%500;
  one=tmp/5;
  sum=1000*hun+5*one;
  printf("%lu",sum);
  return 0;
}
  