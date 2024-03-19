#include <stdio.h>

int
main(void)
{
	char s[5];
	scanf("%s", s);

	int i;
	for (i = 1; i < 4; i++) {
		if (s[i] == s[i - 1]) {
			puts("Bad");
			return (0);
		}
	}
	puts("Good");
	return (0);
}
