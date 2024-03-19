#include <stdio.h>
#include <string.h>

int
main(void)
{
	char str[1001];
	char tmp[1001];
	char cmd[16];
	int a, b, q, l;

	scanf("%s %d", str, &q);

	for (int i = 0; i < q; i++) {
		scanf("%s", cmd);
		if (cmd[0] == 'p') {
			scanf("%d %d", &a, &b);
			l = b - a + 1;
			memcpy(tmp, str + a, l);
			tmp[l] = '\0';
			printf("%s\n", tmp);
		} else if (cmd[2] == 'v') {
			scanf("%d %d", &a, &b);
			l = b - a + 1;
			for (int j = 0; j <l; j++)
				tmp[j] = str[b - j];
			memcpy(str + a, tmp, l);
		} else if (cmd[2] == 'p') {
			scanf("%d %d %s", &a, &b, tmp);
			l = b - a + 1;
			memcpy(str + a, tmp, l);
		}
	}

	return 0;
}

