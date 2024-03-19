#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int a[200005];
	for (i = 1; i < n; i++)
		scanf("%d", &a[i]);
	int cnt[200005];
	for (i = 0; i < n; i++)
		cnt[i] = 0;
	for (i = 1; i < n; i++)
		cnt[a[i] - 1]++;
	for (i = 0; i < n; i++)
		printf("%d\n", cnt[i]);
	return 0;
}