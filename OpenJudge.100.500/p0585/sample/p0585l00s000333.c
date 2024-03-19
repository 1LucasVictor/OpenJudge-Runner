#include <stdio.h>

int main(void)
{
	int a, b, t;
	scanf("%d %d %d%*c", &a, &b, &t);
	printf("%d", t/a*b);
	
	return 0;
}
