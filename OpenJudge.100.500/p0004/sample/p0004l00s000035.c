#include <stdio.h>

int main(void)
{
	int GCD, LCM;
	int a, b;
	int i, j;
	int max;
	int min;
	
	while (scanf("%d %d", &a, &b) != EOF){
		if (a <= b){	// a ??¨b?????§?????????
			max = b;
			min = a;
		}
		else {
			max = a;
			min = b;
		}
		for (i = max; i > 0; i--){
			if (a % i == 0 && b % i == 0){
				break;
			}
		}
		
		for (j = min; j <= 2000000000; j++){
			if (j % a == 0 && j %b == 0){
				break;
			}
		}
		
		printf("%d %d\n", i, j);
	}
	
	return (0);
}