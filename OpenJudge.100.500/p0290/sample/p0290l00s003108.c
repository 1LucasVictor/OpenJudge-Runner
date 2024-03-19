#include <stdio.h>

int		main(void)
{
	int		n;
	int		x;
	int		rst;
	//int		rmd;
	int		i, j;

	rst = 0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&x);
		if( x==2 )
		{
			rst=rst+1;
			continue;
		}
		for(j=2; j<=x-1; j++)
		{
			if(( x % j ) == 0 )
			{
				break;
			}
			else
			{
				if( j == x-1 )
				{
					rst=rst+1;
					//printf("x=%d\n",x);
				}
			}
		}
	}
	printf("%d\n",rst);

	return 0;
}