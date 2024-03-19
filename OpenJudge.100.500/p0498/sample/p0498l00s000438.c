#include<stdio.h>

int main() {
	int n, p;
	scanf("%d", &n);
	p = (n / 2) + (n % 2);
	printf("%d", p);
}