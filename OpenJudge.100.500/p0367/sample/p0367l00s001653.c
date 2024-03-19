#include <stdio.h>

int main()
{
	int a, b, c, i, x;

	scanf("%d%d%d", &a, &b, &c);
	
	i = 0;
	
	for (x = a; x <= b; x++){
		if (c % x == 0) i++;
	}
	printf("%d\n", i);
	
	return 0;
}

