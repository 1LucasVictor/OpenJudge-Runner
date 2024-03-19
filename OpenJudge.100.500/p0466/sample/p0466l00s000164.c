#include <stdio.h>
int main() {
	char s[10], t[11];
	int f = 0;
	scanf("%s", s, 10);
	scanf("%s", t, 11);

	for (int i = 0;s[i] != '\0';i++) {
		if (s[i + 1] == '\0' && t[i + 1] != '\0' && t[i + 2] == '\0') f = 1;
		if (s[i] != t[i]) {
			f = 0;
			break;
		}
	}
	if (f == 1) printf("Yes\n");
	else printf("No\n");

	return 0;
}