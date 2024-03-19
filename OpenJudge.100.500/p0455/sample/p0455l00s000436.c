#include <stdio.h>

int main(void) {
	int a;
	if (scanf("%d", &a) != 1) return 1;
	printf("%d\n", a + a*a + a*a*a);
	return 0;
}
