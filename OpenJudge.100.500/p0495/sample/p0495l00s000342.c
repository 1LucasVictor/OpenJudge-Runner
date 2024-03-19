#include <stdio.h>

int main(void)
{
	char s[3];
	int i;
	int cnt = 0;

	scanf("%s", s);

	for (i = 0; i < 3; i++) {
		if (s[i] == 'A') cnt++;
	}

	if (cnt == 0 || cnt == 3) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}

	return 0;
}
