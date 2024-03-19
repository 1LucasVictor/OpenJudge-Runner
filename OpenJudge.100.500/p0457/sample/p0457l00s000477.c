#include<stdio.h>
void main()
{
		int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int count = 0, a[100], b[100], aptr = 0, bptr = 0, t;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < m; j++)
		scanf("%d", &b[j]);

	while (t = 1)
	{
		if (a[aptr] < b[bptr])
		{
			k -= a[aptr];
			if (k <= 0)
			break;
			aptr++;
			count++;
		}
		else
		{
			k -= b[bptr];
			if (k <= 0)
				break;
			bptr++;
			count++;
		}
		if (k <= 0)
		{
			break;
		}
		if (aptr >= n)
		{
			for (; bptr < m; bptr++)
			{
				k -= bptr;
				count++;
				if (k <= 0)
					break;
			}
				break;
		}
		else if (bptr >= m)
		{
			for (; aptr < n; aptr++)
			{
				k -= aptr;
				count++;
				if (k <= 0)
					break;
			}
			break;
		}
	}
	printf("%d", count);

} 