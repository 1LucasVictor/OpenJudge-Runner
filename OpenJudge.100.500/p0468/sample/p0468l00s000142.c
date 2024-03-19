#include <stdio.h>

int main(void) {
	char S[128];
	if (scanf("%127s", S) != 1) return 1;
	puts(S[1] == 'R' ? "ABC" : "ARC");
	return 0;
}
