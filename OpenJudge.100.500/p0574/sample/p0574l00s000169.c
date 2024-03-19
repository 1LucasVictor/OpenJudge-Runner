#include <stdio.h>
int main(void) {
	int S[5000], i, a;
	scanf("%d", S);
	a = 0;
	for (i = 0; i < 4; i++) {
		if (S[i] == S[i + 1]) {
			a = a + 1;
			break;
		}
	}
	if (a > 0) {
		printf("Bad");
	}
	else {
		printf("Good");
	}

	return 0;
}