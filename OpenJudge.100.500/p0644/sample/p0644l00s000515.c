#include<stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d", num % 10 + num / 10 % 10 + num / 100 % 10);
}