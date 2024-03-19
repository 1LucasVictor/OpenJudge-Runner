#include <stdio.h>
#include <string.h>

int main() {
		/* 変数の定義 */
	char s[5];
	char *p;
		scanf("%s", &s,5);
		p = strchr(s, 'B');
		if (p == NULL)printf("ABC");
		else printf("ARC");

		return 0;
}