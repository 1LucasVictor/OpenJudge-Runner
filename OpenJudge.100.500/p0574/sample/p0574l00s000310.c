#include <stdio.h>

int main() {
	int i;
	char S[6];

	scanf("%s", &S);

	for (i = 0; i < 4; i++) {
		if (S[i] == S[i + 1]) {
			printf("Bad\n");
			return 0;
		}
	}

	printf("Good\n");

	return 0;
}