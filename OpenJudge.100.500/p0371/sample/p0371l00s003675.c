#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int min;
	int max;
	long long sum;
	
	min = 0;
	max = 0;
	sum = 0;
	
	scanf("%d", &a);
	for (b = 1; b <= a; b++){
		scanf("%d", &c);
		if (b == 1){
			min = c;
			max = c;
			sum = 0;
		}
		if (c > max){
			max = c;
		}
		if (c < min){
			min = c;
		}
		sum += c;
	}
	
	printf("%d %d %lld\n", min, max, sum);
	
	
	return (0);
}