#include <stdio.h>
int main(void)
{
	int a, b, c, n = 0;
	scanf("%d %d %d", &a, &b, &c);
	int i = a;
	while(i <= b)
	{
		if(c % i == 0)
		{
			n++;
		}
		i++;
	}
	printf("%d\n", n);
	return 0;

}


