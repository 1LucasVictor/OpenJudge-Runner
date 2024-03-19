#include <stdio.h>
int main(void)
{
	int a,b,c, d;
  	scanf("%d%d%d", &a,&b,&c);
  d = c - (a - b);
d = d < 0 ? 0 : d;
printf("%d\n", d);
  return 0;
}