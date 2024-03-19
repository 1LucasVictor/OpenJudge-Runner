#include <stdio.h>

int
main(void)
{
	char s[1600];

	for (;;) {
		int n = 0;
		scanf("%s", s);

		if (s[0] == '0' && s[1] == '\0')
			break;

		for (char *c = s; *c != '\0'; c++)
			n += *c - '0';
		printf("%d\n", n);
	}

	return 0;
}

