#include <stdio.h>

int main(void) {
	char s[4];
	int i;
	int kugyu = 0;
	if (scanf("%3s", s) != 1) return 1;
	for (i = 0; i < 3; i++) {
		if (s[i] == '1') kugyu++;
	}
	printf("%d\n", kugyu);
	return 0;
}
