#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
int acs(const void *a, const void *b){return *(int*)a - *(int*)b;} /* 1,2,3,4.. */
int des(const void *a, const void *b){return *(int*)b - *(int*)a;} /* 8,7,6,5.. */
#define min(a,b) (a < b ? a: b)
#define max(a,b) (a > b ? a: b)

#define mod 2019

int main(void)
{
	int l, r;
	scanf("%d %d", &l, &r);

	int ans;
	if (r - l < 2019 && r % mod - l % mod > 0)
	{
		ans = l % mod * (l % mod + 1);
	} else {
		ans = 0;
	}
	printf("%d\n", ans);
	return 0;
}