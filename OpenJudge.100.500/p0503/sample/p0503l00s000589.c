#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long compare(const void *a, const void *b)
{
	return *(long*)a - *(long*)b;
}


int main(void)
{
	long nums[200000];
	int n, flg = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld", &nums[i]);
	}
	qsort(nums, n, sizeof(long), compare);
	for (int i = 0; i < n - 1 ; i++) {
		if (nums[i] == nums[i + 1]) {
			flg++;
			break;
		}
	}
	if (flg) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
	}
	return 0;
}
