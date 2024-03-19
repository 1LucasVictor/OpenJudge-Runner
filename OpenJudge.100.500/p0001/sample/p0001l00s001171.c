
#include <stdio.h>

int main(void)
{
	int a, b, sum;
	int i;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		
		i = 0;
		while (sum!= 0){
			sum /= 10;
			i++;
		}
		
		printf("%d\n", i);
	}
	
	return (0);
}