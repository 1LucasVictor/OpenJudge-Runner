#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define num_max(p,q)((p)>(q)?(p):(q))
#define num_min(p,q)((p)<(q)?(p):(q))
int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;//昇順
	 //降順ならreturn *(int*)b - *(int*)a;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (1<=a&&a<=9&&1<=b&&b<=9)printf("%d\n", a*b);
	else printf("-1\n");
	return 0;
}