#include <stdio.h>

int main(void)
{
	int i;
	int x, y, temp, remainder;

	scanf("%d %d", &x, &y);

	if(x < y){
		temp = x;
		x = y;
		y = temp;
	}

	while(x % y != 0){
		remainder = x % y;
		x = y;
		y = remainder;
	}

	printf("%d\n", y);

	return 0;
}
