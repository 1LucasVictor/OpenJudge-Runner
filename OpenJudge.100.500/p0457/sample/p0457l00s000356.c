#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, m, k;
	int a[300000], b[300000];
	int i, ans, k2, an, bn;

	scanf("%d%d%d", &n, &m, &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}

	k2 = k;
	an = 0;
	for (i = 0; i < n; i++)
	{
		k2 -= a[i];
		if(k2 >= 0) an++;
		else
		{
			k2 += a[i];
			break;
		}
	}
	bn = 0;
	for (i = 0; i < m; i++)
	{
		k2 -= b[i];
		if(k2 >= 0) bn++;
		else
		{
			k2 += b[i];
			break;
		}
	}
	ans = an + bn;
	for (;;)
	{
		if (an > 0)
		{
			an--;
			k2 += a[an];
		}
		else
		{
			break;
		}

		for (i = bn; i < m; i++)
		{
			k2 -= b[i];
			if(k2 >= 0) bn++;
			else
			{
				k2 += b[i];
				break;
			}
		}
		if (ans < an + bn) ans = an + bn;
	}


	printf("%d\n", ans);

	return 0;
}
