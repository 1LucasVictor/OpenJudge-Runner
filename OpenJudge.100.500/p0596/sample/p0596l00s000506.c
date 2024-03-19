#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100010];
	scanf("%s", s);
	int i;
	int count_0 = 0, count_1 = 0;
	int flag = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (flag == 0 && s[i] == '0') {
			flag = 1;
		}
		if (flag == 1 && s[i] == '1') {
			count_1++;
		}
		if (flag == 1 && s[i] == '0') {
			count_0++;
		}
	}
	if (s[i-1] == '0') {
		count_0--;
	}
	if (i < 2) {
		printf("0\n");
	} else if (count_0 < count_1) {
		printf("%d\n", count_0 * 2);
	} else {
		printf("%d\n", count_1 * 2);
	}
	return 0;
}
