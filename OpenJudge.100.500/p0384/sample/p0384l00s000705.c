#include<stdio.h>
int main() {
	int i;
	char ch;
	char st[1200] = {0};
	for (i = 0;i < 1200;i++) {
		scanf("%c", &ch);
		if (65 <= ch&&ch < 90) ch += 32;
		else if (97 <= ch&&ch <= 122)ch -= 32;
		st[i] = ch;
		if (ch == '\n') {
			st[i + 1] = '\0';
			break;
		}
	}
	printf("%s", st);
	return 0;
}