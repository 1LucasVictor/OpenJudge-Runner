#include <stdio.h>

int main(void) {
	char s[200005] = { 0 };
	char t[200005] = { 0 };

	int n = 0;

	scanf("%s", s);
	scanf("%s", t);

	for (int i = 0; s[i] != 0; i++) {
		if (s[i] != t[i]) {
			n++;
		}
	}
	
	printf("%d", n);

	return 0;
}