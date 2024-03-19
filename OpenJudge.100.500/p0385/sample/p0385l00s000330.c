#include<stdio.h>

int main(void)
{
	int x;
	int sum;
	
	while(1){
		sum = 0;
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		while(x > 0){
			sum +=(x % 10);
			x /= 10;
		}
		printf("%d\n", sum);
	}
	
	return (0);
}