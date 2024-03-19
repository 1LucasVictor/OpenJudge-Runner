#include <stdio.h>
#define SIZE 21
int main() {
	int i;
	char s[SIZE] = "";
	scanf("%20s", s);
	for (i = 20; i >= 0; i--) {
		if (s[i] != '\0')
			printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}