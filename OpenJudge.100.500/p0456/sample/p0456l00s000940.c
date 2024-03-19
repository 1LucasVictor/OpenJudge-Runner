#include <stdio.h>

char S[222222], T[222222];

int main(void) {
	int sumipe = 0, i;
	if (scanf("%222221s", S) != 1) return 1;
	if (scanf("%222221s", T) != 1) return 1;
	for (i = 0; S[i] != '\0' || T[i] != '\0'; i++) {
		sumipe += S[i] != T[i];
	}
	printf("%d\n", sumipe);
	return 0;
}
