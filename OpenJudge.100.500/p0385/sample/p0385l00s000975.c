#include<stdio.h>

int sumOfNumber() {
	int sum = 0;
	long x;
	scanf("%ld" , &x);
	if (x == 0) return 0;
	while(x > 0) {
		sum += x % 10;
		x /= 10;
	}
	printf("%d\n" , sum);
	return 1;
}

int main () {
	while(sumOfNumber());
	return 0;
}