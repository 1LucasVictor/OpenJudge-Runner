/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
#include	<string.h>

#define		MXHAIRETUSU		100

int		main(void)
{
	int		n, m;
	int		i,j;
	int		a[MXHAIRETUSU][MXHAIRETUSU]={0};
	int		b[MXHAIRETUSU];
	int		c;

	scanf("%d",&n);
	scanf("%d",&m);

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<m; i++)
	{
		scanf("%d",&b[i]);
	}

	for(i=0; i<n; i++)
	{
		c=0;
		for(j=0; j<m; j++)
		{
			c = a[i][j]*b[j] + c;
		}
		printf("%d\n",c);
	}

	return 0;
}