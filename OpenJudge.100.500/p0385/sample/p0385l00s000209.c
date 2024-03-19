#include<stdio.h>

int sumOfNumber() {
	int x , sum = 0;
	scanf("%d" , &x);
	if (x == 0) return 0;
	while(x > 0) {
		sum += x % 10;
		x /= 10;
	}
	printf("%d\n" , sum);
	return 1;
}

int main () {
	int x;
	while(sumOfNumber());
	return 0;
}