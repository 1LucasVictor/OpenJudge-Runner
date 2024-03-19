#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {


	char str[1200] = { 0 };
	char newStr[1200] = { 0 };

	scanf("%[^\n]",&str);

	int i = 0;
	for (; i < 1200; i++) {
		if ((char)64 < str[i] && str[i] < (char)91) {
			newStr[i] = str[i] + (97 - 65);
		}
		else if ((char)96 < str[i] && str[i] < (char)123) {
			newStr[i] = str[i] - (97 - 65);
		}
		else {
			newStr[i] = str[i];
		}
		
	}
	printf("%s\n", newStr);

	return 0;
}
