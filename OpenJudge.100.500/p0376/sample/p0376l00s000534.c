#include <stdio.h>

int main(void) {
	int a[1000];
	int n, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	
	for (i = n - 1; i >= 0; i--) printf("%s%d", i == n - 1 ? "" : " ", a[i]);
	puts("");
	
	return 0;
}