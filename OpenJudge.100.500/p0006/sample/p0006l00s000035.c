#include <stdio.h>

#define KARI 100000

int main(void)
{
	int n;
	int i;
	int sum = KARI + 0.05 * KARI;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		sum += (KARI * 0.05);
		if (sum % 1000 != 0){
			sum /= 1000;
			sum *= 1000;
			sum += 1000;
		}
	}
	
	printf("%d\n", sum);
	
	return (0);
}