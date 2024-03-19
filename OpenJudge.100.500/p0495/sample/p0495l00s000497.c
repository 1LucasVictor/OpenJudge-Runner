#include <stdio.h>

int main(void) {
	char S[8];
	if (scanf("%7s", S) != 1) return 1;
	puts(S[0] == S[1] && S[1] == S[2] ? "No" : "Yes");
	return 0;
}
