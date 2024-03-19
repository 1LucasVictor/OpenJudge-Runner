/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
#include	<string.h>
//#include	<math.h>

int		main(void)
{
	int		n;
	int		a;
	int		i;
	int		min, max;
	double	sum;

	min = 1000000;
	max = -1000000;

	sum = 0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a);
		if( a < min )
		{
			min = a;
		}
		if( max < a )
		{
			max = a;
		}
		sum = sum+a;
	}
	printf("%d %d %.0lf\n",min, max, sum);

	return 0;
}