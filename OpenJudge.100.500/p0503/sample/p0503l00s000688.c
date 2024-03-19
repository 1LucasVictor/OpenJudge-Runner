#include<stdio.h>
long long int n, a[100000000] = { 0 }, p, i, j;
int main(void)
{
	int f = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p);
		a[p]++;
		if (a[p] > 1) {
			f = 1;
			break;
		}
	}
	if (f == 1) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
	}
	return 0;
}
