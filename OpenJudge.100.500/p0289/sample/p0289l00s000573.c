#include <stdio.h>

int gcd(int a, int b);

int main() {

	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", gcd(a, b));

	return 0;
}

int gcd(int a, int b) {

	int tmp;
	
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}


	while (a % b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}

	return b;

}