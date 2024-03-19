#include <stdio.h>

int check(int a, int b, int c);

int main(int argc, char *argv[])
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int a, b, c;
		fscanf(stdin, "%d %d %d", &a, &b, &c);
		if (check(a, b, c)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

int check(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a*a==b*b+c*c;
	} else if (b >=a && b >= c) {
		return b*b==a*a+c*c;
	} else {
		return c*c==a*a+b*b;
	}
}