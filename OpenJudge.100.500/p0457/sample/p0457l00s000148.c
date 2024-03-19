#include <stdio.h>
#include <stdlib.h>

long max(long a, long b){
	return a > b ? a : b;
}

int count(long *a, long *b, int l, int r, int n, int m, long k){
	if(k <= 0)return 0;
	int lc = 0, rc = 0;
	if(l < n && a[l] <= k)lc = count(a, b, l + 1, r, n, m, k - a[l]) + 1;
	if(r < m && b[r] <= k)rc = count(a, b, l, r + 1, n, m, k - b[r]) + 1;
	return max(lc, rc);
}

int main(void){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	long *a = malloc(sizeof(long) * n), *b = malloc(sizeof(long) * m);
	for(int i = 0; i < n; i++)
		scanf("%ld", a + i);
	for(int i = 0; i < m; i++)
		scanf("%ld", b + i);
	printf("%d\n", count(a, b, 0, 0, n, m, k));
	return 0;
}
