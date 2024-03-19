#include <stdio.h>
int main(void)
{
	int i1, i2, i3, n, x, m;
	for (;;)
	{
		m=0;
		scanf("%d%d", &n, &x);
		if (n==0 && x==0)
		{
			break ;
		}

		for (i1=1;i1<n;i1++)
		{
			for (i2=2;i2<n;i2++)
			{

				for (i3=3;i3<n;i3++)
				{
					if (i1+i2+i3==x)
					{
						if (i1!=i2 && i2!=i3 && i1!=i3)
						{
							m=m+1;
						}
					}
				}
			}
		}
		printf("%d\n", m/2);
	}
	return 0;
}