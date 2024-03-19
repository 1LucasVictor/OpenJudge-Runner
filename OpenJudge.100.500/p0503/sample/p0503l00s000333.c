#include<stdio.h>
#include<string.h>
#include<math.h>

int ddd(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main(void) {
	int n;
	int a[200110];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}
	qsort(a, n, sizeof(int), ddd);

	for (int i = 0; i < n; i++) {
		if (a[i] == a[i + 1]) {
			printf("NO");
			return 1;
		}
	}
	printf("YES");
	return 0;
}