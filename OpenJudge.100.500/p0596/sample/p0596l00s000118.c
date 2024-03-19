#include <stdio.h>

int main()
{
	int n;
	char st[100005];
	int sp = 0;
	int ch;
	int ans = 0;

	while ((ch = getchar()) != EOF && ch != '\n') {
		sp++;

		st[sp] = ch;

		if (sp > 1 && st[sp] != st[sp - 1]) { 
			ans += 2;
			sp -= 2;
		}
	}

	printf("%d\n", ans);

	return 0;
}
