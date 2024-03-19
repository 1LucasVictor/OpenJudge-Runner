/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>

int		main(void)
{
	int		a, b, c;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if(( a < b ) && ( b < c))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}