#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long long int m,n,i,x,y,max=0,num=0;
	scanf("%lld%lld", &m, &n);
	n = n * n;
	/*for (i = 0; i < m; i++)
	{
		scanf("%lld%lld", &x[i], &y[i]);
		for (j = 0; j < i; j++)
		{
			if (x[i] == x[j] && y[i] == y[j])
			{
				x[i] = 0;
				y[i] = 0;
				break;
			}
		}
	}*/
	for (i = 0; i < m; i++)
	{
		scanf("%lld%lld", &x, &y);
		max = x * x + y * y;
		if (max > n)
		{
			num++;
		}
	}
	printf("%lld", m-num);
	return 0;
}