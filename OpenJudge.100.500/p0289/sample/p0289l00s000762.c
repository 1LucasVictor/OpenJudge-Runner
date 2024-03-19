#include <stdio.h>

int main(void)
{
	int x, y, i;
	
	scanf("%d %d", &x, &y);
	
	if (x < y){
		for (i = x; i != 0; i--){
			if (((x % i) == 0) && ((y % i) == 0)){
				printf("%d\n", i);
				i = 1;
			}
		}
	}
	
	else if (x > y){
		for (i = y; i != 0; i--){
			if (((x % i) == 0) && ((y % i) == 0)){
				printf("%d\n", i);
				i = 1;
			}
		}
	}
	
	else if (x == y){
		printf("%d\n", x);
	}
	return (0);
}