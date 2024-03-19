#include <stdio.h>

int main(void)
{
	int a, b, sum = 0, c = 1;
	while(scanf("%d %d", &a, &b) != EOF){
		
		sum = a + b;
		while(sum / 10 != 0){
			c++;
			sum /= 10;
		}
		printf("%d\n", c);
		c = 1;
	}
	return 0;
}