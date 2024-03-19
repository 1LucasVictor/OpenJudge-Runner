/*
	http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0009
	Prime Number
*/

#include <stdio.h>
int main(void)
{
	/* ??¨???????????????????????? */
	int i,j,k,l,n,prime;

	while(scanf("%d", &n) != EOF){
		int a[n];
		for (i = 0; i <= n; ++i)
		{
			a[i] = 1;
		}

		/* 0,1????´???°??§????????? */
		a[0] = 0;
		a[1] = 0;

		for (j = 2; j * j <= n; ++j)
		{
			if (a[j] == 1)
			{
				for (k = 2; k * j <= n; ++k)
				{
					a[k*j] = 0;
				}
			}
		}

		prime = 0;
		for (l = 2; l <= n; ++l)
		{
			if (a[l] == 1)
			{
				prime++;
			}
		}
		printf("%d\n", prime);
	}
	return 0;
}