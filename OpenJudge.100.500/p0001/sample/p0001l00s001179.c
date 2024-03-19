#include <stdio.h>

int main(void)
{
	int a, b;
	int cnt = 0;
	int sum;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		cnt = 0;
		
		do {
			sum /= 10;
			cnt++;
		} while (sum > 0);
		
		printf("%d\n", cnt);
	}
	
	return (0);
}