#include <stdio.h>

int main(void)
{
	int x, y, z;
	
	scanf("%d %d", &x, &y);
	
	if (x % y == 0){
		printf("%d\n", y);
	}
	
	z = x % y;
	
	while (z != 0){
		x = y;
		y = z;
		z = x % y;
	}
	
	printf("%d\n", y);
	
	return (0);
}