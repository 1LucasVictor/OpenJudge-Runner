#include <stdio.h>


int main(void)
{
	int sum = 0;
	int a, b;
	int digit = 0;
	
	while(scanf("%d %d", &a, &b) != EOF) {
		sum = a + b;
		while(sum){
			digit++;
			sum /= 10;
		}
		printf("%d\n", digit);
		digit = 0;
	}

	return 0;
}