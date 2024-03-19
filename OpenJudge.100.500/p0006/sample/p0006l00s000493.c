#include <stdio.h>

int main(void)
{
	int n;
	int sum;
	
	scanf("%d", &n);
	
	sum = 100000;
	
	while (n--){
		sum += (sum / 100 * 5);
	}
	
	if (sum % 10000 > 0){
		sum /= 10000;
		sum *= 10000;
		sum += 10000;
	}
	
	printf("%d\n", sum);
	
	return (0);
}