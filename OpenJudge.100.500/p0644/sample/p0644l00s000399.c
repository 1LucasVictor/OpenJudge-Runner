#include <stdio.h>

int
main() {
	char s[4] = {0};
	int r     = 0;
	scanf("%s", s);
	for (int i = 0; i < 3; i++) {
		if (s[i] == '1') r++;
	}
	printf("%d\n", r);
	return 0;
}
