#include <stdio.h>
int main(void) {
	char s[10], t[11];
	int f = 0;
	scanf("%s", s);
	scanf("%s", t);
	for (int i = 0;s[i]!='\0';i++) {
		if (s[i + 1] == '\0' && t[i + 1] != '\0') f = 1;
		if (s[i] != t[i]) {
			f = 0;
			break;
		}
	}
	if (f == 1) printf("Yes\n");
	else printf("No\n");
	return 0;
}