#include <stdio.h>

int main()
{
	char str[8];
	int  ch[256] = {};

	scanf("%s", str);

	for (int i = 0; i < 4; i++) {
		ch[str[i]]++;
	}

	for (int i = 'A'; i <= 'Z'; i++) {
		if (ch[i] != 0 && ch[i] != 2) {
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");

    return 0;
}
