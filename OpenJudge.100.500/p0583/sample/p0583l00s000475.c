#include <stdio.h>
int main(void)
{
	int n, a, b, c, d, i, ans;
	char s[200000];
	ans = 0;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%s", s);
	if (c > d) {
		for (i = 0; i < n; i++) {
			if (s[i] == '#') {
				if (s[i + 1] == '.') {
					if (s[i + 2] == '.') {
						if (s[i + 3] == '.') {
							ans = 1;
						}
					}
				}
			}
		}
	}
	else {
		for (i = 0; i < n; i++) {
			if (s[i] == '#') {
				if (s[i + 1] != '#') {
					ans = 1;
				}
			}
		}
	}
	if (ans == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}