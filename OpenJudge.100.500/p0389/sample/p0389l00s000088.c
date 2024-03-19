#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[201], tmp[201];
	int i, h, s_cnt;

	memset(str, '\0', sizeof(str));
	
	while (1) {
		scanf("%s", str);

		if (str[0] == '-') {
			break;
		}

		scanf("%d", &s_cnt);
		int len = strlen(str);

		for (i = 0; i < s_cnt; i++) {
			scanf("%d", &h);
			memset(tmp, '\0', sizeof(tmp));
			memcpy(tmp, &str[h], len - h);
			memcpy(&tmp[len - h], str, h);
			memset(str, '\0', sizeof(str));
			memcpy(str, tmp, len);
		}

		printf("%s\n", str);

	}

	return 0;
}