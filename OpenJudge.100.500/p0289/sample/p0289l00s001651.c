#include <stdio.h>

int main(void)
{
	int x, y, z;
	
	scanf("%d %d", &x, &y);
	
	z = x % y;
	
	while (z != 0){
		x = y;
		y = z;
		z = x % y;
	}
	
	printf("%d\n", y);
	
	return (0);
}