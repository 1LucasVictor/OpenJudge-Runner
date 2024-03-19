#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[201];
	char t[201];
	int i, h, m, l;

	for (;;) {
		scanf("%s", s);
		if (s[0] == '-')
			break;
		l = strlen(s);
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &h);
			memcpy(t, s + h, l - h);
			memcpy(t + l - h, s, h);
			memcpy(s, t, l);
		}
		printf("%s\n", s);
	}

	return 0;
}

