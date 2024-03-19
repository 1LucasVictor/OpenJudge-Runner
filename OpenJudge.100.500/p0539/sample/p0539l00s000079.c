#include <stdio.h>

int main(void) {
	int N;
	int asumi, iguti;
	if (scanf("%d", &N) != 1) return 1;
	for (asumi = 1;  asumi <= 9; asumi++) {
		for (iguti = 1; iguti <= 9; iguti++) {
			if (asumi * iguti == N) {
				puts("Yes");
				return 0;
			}
		}
	}
	puts("No");
	return 0;
}
