/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>

int		main(void)
{
	int		n, x, y;
	int		i, j;
	int		a, b, c;
	int		rst;

	rst = 0;
	while(1)
	{
		scanf("%d",&n);
		scanf("%d",&x);

		if((n==0)&&(x==0))
			break;

		y = x/3;
		for(i=0, a=1; i<n; i++,a++)
		{
			for(j=0,b=a+1; j<n; j++,b++)
			{
				c = x-a-b;
				//printf("c=%d\n",c);

				if(( c>b )&&( n>=c))
				{
					rst+=1;
					//printf("a=%d b=%d c=%d\n",a,b,c);
				}
			}
		}
		printf("%d\n",rst);
		rst = 0;
	}
	return 0;
}