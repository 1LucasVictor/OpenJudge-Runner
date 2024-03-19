#include <stdio.h>

int main(void) {
	char S[4];
	scanf("%s", S);
	if (S[0] == S[1] && S[2] == S[3]) {
		printf("Yes");


	}
	else if (S[0] == S[2] && S[1] == S[3]) {
		printf("Yes");
	}
	else if (S[0] == S[3] && S[1] == S[2]) {
		printf("Yes");

	}
	else {
		printf("No");
	}
	return 0;

}