#include <stdio.h>

int main(void)
{
	int n, i;
	int s[200010];
	int b[200010]={0};

	scanf("%d", &n);
	for (i = 2; i <= n; i++) scanf("%d", &s[i]);
	for (i = 2; i <= n; i++) b[s[i]]++;
	for (i = 1; i <= n; i++) printf("%d\n", b[i]);
	return 0;
}