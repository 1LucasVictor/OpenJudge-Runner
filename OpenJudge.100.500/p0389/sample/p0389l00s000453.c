#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[201] = {0};
	char buf1[201];
	int i, n, cmd, str_len;
	
	while(1) {
		memset(str, '\0', strlen(str));
		scanf("%s", str);
		if (str[0] == '-') break;
		scanf("%d", &n);

		str_len = strlen(str);
		for (i = 0; i < n; ++i) {
			scanf("%d", &cmd);
			memset(buf1, '\0', sizeof(buf1));
			memcpy(buf1, str + cmd, str_len - cmd);
			memcpy(&buf1[str_len -cmd], str, str_len);
			memcpy(str, buf1, str_len);
		}
		printf("%s\n", str);
	}
	return 0;
}