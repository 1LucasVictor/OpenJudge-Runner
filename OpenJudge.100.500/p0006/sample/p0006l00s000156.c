#include <stdio.h>

int main(void) {
	int n, i, amount=100000;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		amount += amount*0.05;
		amount += 999;
		amount /= 1000;
		amount *= 1000;
	}
	
	printf("%d\n", amount);
	
	return 0;
}