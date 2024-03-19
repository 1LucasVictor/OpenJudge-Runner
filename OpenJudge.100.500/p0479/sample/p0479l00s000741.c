#include <stdio.h>

int main(void) {
	int i, n, k, s[2000001];
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		scanf("%d", &k);
		s[k]++;
	}
	for (i = 1; i < n + 1; i++)
	{
		printf("%d\n", s[i]);
	}
	return 0;
}