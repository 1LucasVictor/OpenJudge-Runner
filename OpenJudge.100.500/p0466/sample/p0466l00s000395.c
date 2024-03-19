#include <stdio.h>

int main(void) {
	char S[10] = { 0 };
	char T[10] = {0};

	scanf("%s", S);
	scanf("%s", T);


	for (int i = 0; S[i] != '\0'; i++) {
		if (S[i] != T[i]) {
			printf("No");
			return 0;
		}
	}

	printf("Yes");
	
	return 0;
}
