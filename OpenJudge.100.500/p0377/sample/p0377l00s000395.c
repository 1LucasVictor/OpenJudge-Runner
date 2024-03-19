#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	int i, n, S[13], H[13], D[13], C[13], num;
	char suit[20];

	for (i = 0; i < 13; i++) {
		S[i] = 0;
		H[i] = 0;
		D[i] = 0;
		C[i] = 0;

	}
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%s %d", suit, &num);

		if (strcmp(suit, "S") == 0) {
			S[num - 1] = 1;
		} else	if (strcmp(suit, "H") == 0) {
			H[num - 1] = 1;
		} else	if (strcmp(suit, "C") == 0) {
			C[num - 1] = 1;
		} else	{
			D[num - 1] = 1;
		}

	}

	for (i = 0; i < 13; i++) {
		if (S[i] == 0) {
			printf("S %d\n", i +1);
		}
	}


	for (i = 0; i < 13; i++) {
		if (H[i] == 0) {
			printf("H %d\n", i +1);
		}
	}


	for (i = 0; i < 13; i++) {
		if (C[i] == 0) {
			printf("C %d\n", i +1);
		}
	}


	for (i = 0; i < 13; i++) {
		if (D[i] == 0) {
			printf("D %d\n", i+1);
		}
	}

	
	return 0;
}