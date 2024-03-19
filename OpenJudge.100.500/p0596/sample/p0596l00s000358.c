#include <stdio.h>
#include <string.h>

#define N 100000

int main() {
	static char s[N + 1];
	int n, i, k0;

	scanf("%s", s);
	n = strlen(s);
	k0 = 0;
	for (i = 0; i < n; i++)
		if (s[i] == '0')
			k0++;
	printf("%d\n", (k0 < n - k0 ? k0 : n - k0) * 2);
	return 0;
}
