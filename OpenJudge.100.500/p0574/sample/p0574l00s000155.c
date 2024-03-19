#include<stdio.h>

int main(void) {

	char S[4];

	scanf("%s", S);
	for (int i = 0; i < 3; ++i) {
		if (S[i] == S[i + 1]) {
			puts("Bad");
			return 0;
		}
	}
	puts("Good");
	return 0;
}
