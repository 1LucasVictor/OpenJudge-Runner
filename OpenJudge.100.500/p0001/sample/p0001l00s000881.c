#include <stdio.h>

int main(void)
{
	int x, y;
	int num;
	
	while (scanf("%d %d", &x, &y) != EOF){
		num = 0;
		x += y;
		while (x){
			x /= 10;
			num++;
		}
		
		printf("%d\n", num);
	}
	
	return (0);
}