#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	int ii;
	char str[1201];

	//クリア
	memset(str, (int)0, sizeof(char) * 1201);

	fgets(str, 1200, stdin);

	for (ii = 0; ii < (int)strlen(str); ii++) {
		if ((str[ii] >= 'A' && str[ii] <= 'Z') || (str[ii] >= 'a' && str[ii] <= 'z')) {
			if (str[ii] & 0x20) {	//小文字
				str[ii] &= 0xdf;
			}
			else {	//大文字
				str[ii] |= 0x20;
			}
		}
	}

	printf("%s", str);

	getchar();

	return 0;

}