#include <stdio.h>
#include <string.h>

int main() {
	char s[15], t[15];
	int count = 0;
	size_t len;
	scanf("%s", s, 15);
	scanf("%s", t, 15);
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == t[i]) count += 1;
	}
	if (count == len) printf("Yes");
	else printf("No");
	return 0;
}