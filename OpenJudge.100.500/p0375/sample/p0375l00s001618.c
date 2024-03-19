/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
//#include	<string.h>
//#include	<math.h>

int		main(void)
{
	int 	i;
	int		x;
	int		n;

	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		x = i;
		if ( x % 3 == 0 )
		{
			printf(" %d",i);
		}
		else
		{
			while(1)
			{
				if ( x % 10 == 3 )
				{
					printf(" %d",i);
					break;
				}
				x /= 10;
				if( x==0 )
					break;

			}
		}
	}
	printf("\n");
	return 0;
}