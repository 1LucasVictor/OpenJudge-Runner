#include <stdio.h>
int main(void) {
	int a, b, c, buf;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b){
		buf = a;
		a = b; b = buf;
	}
	if (a > c){
		buf = a;
		a = c; c = buf;
	}
	if (b > c){
		buf = b;
		b = c;
		c = buf;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;
}