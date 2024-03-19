#include <stdio.h>

int main(void)
{
  int n,i,s;
  scanf("%d",&n);
  s = 100000;
  for( i = 0; i < n; i++ ) {
    s += s*0.05;
    s += (1000-s%1000)%1000;
  }
  printf("%d\n",s);
  return 0;
}