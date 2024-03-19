#include <stdio.h>
#include <string.h>

int main(void) {
	char buf[1001] = {0};
	char tbuf[1001] = {0};
	char cmd[10] = {0};
	int n, i, j;
	int a, b;
	
	scanf("%s", buf);
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		memset(tbuf, '\0', sizeof(tbuf));
		memset(tbuf, '\0', sizeof(cmd));
		scanf("%s", cmd);
//		printf("%s %d", cmd, i);
		if (strcmp(cmd, "replace") == 0) {
//			printf("replace %d\n", i);
			scanf("%d %d %s", &a, &b, tbuf);
			for (j = a; j <= b;++j) {
				buf[j] = tbuf[j -a];				
			}
		} else if (strcmp(cmd, "reverse") == 0) {
			scanf("%d %d", &a, &b);
			for (j = a; j <= b; ++j) {
				tbuf[j-a] = buf[j];
			}
			for (j = a; j <= b; ++j) {
				buf[j] = tbuf[b - j];
			}
		} else {
			scanf("%d %d", &a, &b);
			for (j = a; j <= b; ++j) {
				putchar(buf[j]);
			}
			putchar('\n');
		}
	}
	
	return 0;
}