#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum;
	int i;
	
	while (scanf("%d %d", &a, &b) != EOF){
		
		sum = a + b;
		i = 1;
		
		while (sum / 10 != 0){
			i++;
			sum /= 10;
		}
		
		printf("%d\n", i);
		
	}
		return (0);
}