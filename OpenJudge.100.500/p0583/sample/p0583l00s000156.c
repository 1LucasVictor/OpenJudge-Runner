#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
	int n, a, b, c, d;
	char s[2000] = { 0 };
	int flag = 1;
	int max;

	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	scanf("%s", s);
	if (c < d)max = d;
	else max = c;
	for (int i = a - 1; i < max; i++) {
		if (s[i] == '#' && s[i + 1] == '#') {
			flag = 0;
			break;
		}
	}
	if (c > d) {
		for (int i = b - 1; i < d; i++) {
			if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
				break;
			else if (i == d - 1)flag = 0;
		}
	}
	if (flag) printf("Yes");
	else printf("No");
	return 0;
}
