#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int ASCttenannoryaku(const void *a,const void *b) {
	return *(int *)a - *(int *)b;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	int a[200000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n,sizeof(int), ASCttenannoryaku);
	for (int i = 0; i < n-1; i++) {
		//printf("%d ", a[i]);
		if (a[i] == a[i+1]) {
			printf("NO");
			return 0;
		}
	}

	printf("YES");
	return 0;
}
