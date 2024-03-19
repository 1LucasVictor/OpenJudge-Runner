#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100010];
	scanf("%s", s);
	int i;
	int ans = 0;
	int flag = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (flag == 0 && s[i] == '0') {
			flag = 1;
		}
		if (flag == 1 && s[i] == '1') {
			ans++;
		}
	}
	if (i < 2) {
		printf("0\n");
	} else {
		printf("%d\n", ans * 2);
	}
	return 0;
}
