#include <stdio.h>

int main(void) {

	int n, i;
	int a[100000], ans[100000];

	scanf("%d", &n);

	for (i = 2; i <= n; i++)scanf("%d", &a[i]);

	for (i = 0; i <= n; i++) ans[i] = 0;
	for (i = 2; i <= n; i++) ans[a[i]]++;
	for (i = 1; i <= n; i++) printf("%d\n", ans[i]);


	return 0;
}