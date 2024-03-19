#include <stdio.h>

int main() {
	char str[32];
	int i = 0;

	scanf("%s", str);

	while(str[i]) i++;

	while(i) {
		i--;
		printf("%c", str[i]);
	}

	putchar('\n');

	return 0;
}