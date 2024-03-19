#include <stdio.h>

int main(void)
{
	int i, j;
	int count = 0;
	char s[5];

	scanf("%s", s);

	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++) {
			if (s[i] == s[j]) {
				count++;
			}
		}
	}

	if (count == 2) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}