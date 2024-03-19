#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int gcd(int a, b) {
	if(a == 0 || b == 0) return 0;
	while(a != b) {
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

int lcm(int a, int b) {
	if(a == 0 || b == 0) return 0;
	return (a / gcd(a, b)) * b;
}

int main() {
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF) {
		printf("%d %d\n", gcd(a, b), lcm(a, b));
	}
}