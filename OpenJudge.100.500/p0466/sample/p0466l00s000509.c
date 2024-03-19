#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char s[11], t[11];
	int i, l;

	scanf("%s", s);
	scanf("%s", t);


		for (i = 0; s[i]!='\0'; i++) {
			if (s[i] != t[i]) {
				printf("No");
				return 1;
			}
		}
		if (t[i+1] != '\0') {
			printf("No");
			return 1;
		}
		else {
			printf("Yes");
		}


	return 0;
}