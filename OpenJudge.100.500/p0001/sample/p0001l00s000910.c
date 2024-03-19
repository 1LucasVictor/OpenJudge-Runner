#include<stdio.h>

int getDigt(int number) {
	int digt = 0;
	while(number > 0) {
		digt++;
		number /= 10;
	}
	return digt;
}

int main () {
	int a , b;
	while(scanf("%d %d" , &a , &b) > 0) {
		printf("%d\n" , getDigt(a + b));
	}
	return 0;
}