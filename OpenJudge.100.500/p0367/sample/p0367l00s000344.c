#include <stdio.h>
int main(void)
{
 int i, a, b, c, x;
 x = 0;
 scanf("%d %d %d", &a, &b, &c);
 for (i = a;i <= b;i++)
	{
	 if (c%i == 0)
	 {
	  x = x + 1;
          }
	}
	printf("%d\n",x);
	
	return 0;
}


