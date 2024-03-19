#include <stdio.h>

int main(void) {
	int S = 0;
	int h, m, s = 0;
	scanf("%d", &S);
	s = S%60;
	m = S/60;
	h = m/60;
	m = m%60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}