/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
#include	<string.h>

#define		MXCD		52
#define		CCD			13

int		main(void)
{
	int		n;
	int		atai;
	int		i;
	int		s[CCD+1]={0};
	int		h[CCD+1]={0};
	int		c[CCD+1]={0};
	int		d[CCD+1]={0};
	char	syubetu[10];

	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		scanf("%s",syubetu);
		scanf("%d",&atai);

		if( strcmp("S",syubetu)==0 )
		{
			s[atai] = 1;
		}
		else if( strcmp("H",syubetu)==0 )
			h[atai] = 1;

		else if( strcmp("C",syubetu)==0 )
			c[atai] = 1;

		else
			d[atai] = 1;
	}

	for(i=1; i<=CCD; i++)
	{
		if(s[i] ==0 )
		{
			//printf("%d %d\n",i,s[i]);
			printf("S %d\n",i);
		}
	}
	for(i=1; i<=CCD; i++)
	{
		if(h[i] ==0 )
		{
			printf("H %d\n",i);
		}
	}
	for(i=1; i<=CCD; i++)
	{
		if(c[i] ==0 )
		{
			printf("C %d\n",i);
		}
	}
	for(i=1; i<=CCD; i++)
	{
		if(d[i] ==0 )
		{
			printf("D %d\n",i);
		}
	}
	return 0;
}