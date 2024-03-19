#include <stdio.h>
int main(void) {
	int i, j, c, n;
	char S[5];
	scanf("%s", S);
	n = 1;
	for (i = 0; i < 4; i++) {
		c = 0;
		for (j = 0; j < 4; j++) {
			if (S[i] == S[j]) {
				c = c + 1;
			}
		}
		if (c != 2) {
			n = 0;
			break;
		}
	}
	if (n == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}