#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	char s;
	while (1) {
		scanf("%d %c %d", &a, &s, &b);
		if (s == '+')printf("%d\n", a + b);
		if (s == '-')printf("%d\n", a - b);
		if (s == '*')printf("%d\n", a * b);
		if (s == '/')printf("%d\n", a / b);
		if (s == '%')printf("%d\n", a % b);
		if (s == '?')break;
	}
	return 0;
}