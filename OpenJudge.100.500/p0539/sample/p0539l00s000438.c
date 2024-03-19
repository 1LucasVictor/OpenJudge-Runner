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
	int n;
	scanf("%d", &n);
	int c, d;
	
	for (int i = 1;i <= 9;i++)
	{
		c = n%i;
		d = n / i;
		if (c == 0)
		{
			if (1 <= d&&d <= 9)
			{
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
	return 0;
}