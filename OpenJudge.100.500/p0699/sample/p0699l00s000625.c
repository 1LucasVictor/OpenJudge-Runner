#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
	int a, b, c, d, e, f, g;
	char s[100], t[100], u[100], v[100];

	scanf("%d %d %d", &a, &b, &c);
	if ((a == 5 && b == 5 && c == 7) || (a == 7 && b == 5 && c == 5) || (a == 5 && b == 7 && c == 7)) {
		printf("YES");
	}
	else
		printf("NO");

	printf("\n");
	return 0;
}