#include<stdio.h>

int main()
{
	int n, a, max, min, i;
	long long sum = 0;
	
	max = -1000000;
	min = 1000000;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &a);
		if (a <= min){
			min = a;
		}
		if (a >= max){
			max = a;
		}
		
		sum += a;
	}
		
		
	printf("%d %d %d\n", min, max, sum);
	return 0;
}