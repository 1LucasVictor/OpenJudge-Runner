/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>

#define		MXRC		100
#define		ULONG		unsigned long

int		main(void)
{
	int		n, m, l;
	int		i, j, k;
	int		x;
	int		sum;
	int		mt1[MXRC][MXRC];
	int		mt2[MXRC][MXRC];
	ULONG	mt3[MXRC][MXRC];

	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&l);
	/*
	printf("%d ",n);
	printf("%d ",m);
	printf("%d\n",l);
	*/

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&x);
			mt1[i][j] = x;
			//printf("x=%d\n",x);
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<l; j++)
		{
			scanf("%d",&x);
			mt2[i][j] = x;
		}
	}
	sum = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<l; j++)
		{
			for(k=0; k<m; k++)
			{
				sum = sum + mt1[i][k]*mt2[k][j];
			}
			mt3[i][j] = sum;
			//printf("sum=%d\n",sum);
			sum =0;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("%lu",mt3[i][j]);
			if( j != l-1 )
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}