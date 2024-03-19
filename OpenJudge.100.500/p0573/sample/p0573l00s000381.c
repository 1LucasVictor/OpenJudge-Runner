#include <stdio.h>

#define MAX_LEN 5
#define ATOZ 26

int main(void)
{
	char S[MAX_LEN];
	int alpha[ATOZ] = {0};
	int i, count = 0;
	scanf("%s", S);

	for (i = 0; i < MAX_LEN; i++) {
		char c;
		c = S[i];
		alpha[c - 'A']++;
	}

	for (i = 0; i < ATOZ; i++)
		if (alpha[i] == 2)
			count++;
	puts(count == 2 ? "Yes" : "No");
	return 0;
}
