#include<stdio.h>

int main(void)
{
	unsigned long int a, b, c;
	int i;
	char S[11], T[11], k;

	for (i = 0; i < 11; i++) {
		scanf("%c", &(S[i]));
		if (S[i] == '\n') {
			a = i;
			break;
		}
	}

	for (i = 0; i < a; i++) {
		scanf("%c", &(T[i]));
		if (T[i] != S[i]) {
			printf("No");
			return 0;
		}
	}

	scanf("%c", &(k));
	if ('\n' == k) {
		printf("No");
		return 0;
	}

	scanf("%c", &(k));
	if ('\n' != k) {
		printf("No");
		return 0;
	}

	printf("Yes");

	return 0;
}