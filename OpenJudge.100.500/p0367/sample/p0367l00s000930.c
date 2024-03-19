#include <stdio.h>


int main(void)
{
	int a, b, c, i, div;
	div = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (i = a; i <= b; i++){
		if (c % i == 0) div++;
	}
	printf("%d\n", div);
	return 0;
}