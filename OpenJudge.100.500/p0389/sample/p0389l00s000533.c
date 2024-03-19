#include <stdio.h>
#include <string.h>

int main(void)
{
	int h, m, i;
	char str[201], buf1[201], buf2[201];

	while (1) {
		scanf("%s", str);
		sprintf(buf1, "%s", str);
		sprintf(buf2, "%s", str);

		if (strcmp(str, "-") == 0)
			break;

		scanf("%d", &m);

		for (i = 0; i < m; i++) {
			scanf("%d", &h);

			sprintf(buf1, "%s", &str[h]);
			strncpy(buf2, str, h);
			buf2[h] = '\0';
			sprintf(str, "%s%s", buf1, buf2);
		}

		printf("%s\n", str);
	}

	return 0;
}