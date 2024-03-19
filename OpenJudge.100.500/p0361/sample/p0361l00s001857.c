#include <stdio.h>

int main() {
	int S;
	int h, m, s;
	S = 46979;
	h = S / 3600;
	m = (S- 3600 * h) / 60;
	s = (S - 3600 * h - m * 60);
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}