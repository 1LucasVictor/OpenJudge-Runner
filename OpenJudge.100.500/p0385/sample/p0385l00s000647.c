#include <stdio.h>

int main(void)
{
	char str[1001];
	int ans;
	for (;;) {
		scanf("%s", str);
		if (str[0] == '0') {
			break;
		}
		ans = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			ans += str[i] - '0';
		}
		printf("%d\n", ans);
	}
}

