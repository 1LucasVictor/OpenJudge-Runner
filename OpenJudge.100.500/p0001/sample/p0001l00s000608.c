#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum;
	int c = 1;
	
	while (scanf("%d %d", &a, &b) != EOF){
		
		sum = a + b;
		
		for (; sum / 10 != 0; sum /= 10){
			c++;
		}
		
		printf("%d\n", c);
		c = 1;
	}
	
	return (0);
}