/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
#include	<string.h>

#define		MXCD	1000+5

int		main(void)
{
	int		q;
	int		i, j, k, m;
	int		a, b;
	char	str[MXCD];
	char	odr[MXCD];
	char	rwd[MXCD];
	char	tmp[MXCD];

	scanf("%s",str);
	scanf("%d",&q);

	for(i=0; i<q; i++)
	{
		scanf("%s",odr);
		scanf("%d",&a);
		scanf("%d",&b);

		if( strcmp("print", odr) == 0)
		{
			for(j=a; j<=b; j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
		}
		else if( strcmp("reverse", odr) == 0)
		{
			m = b;
			for(j=a; j<=b; j++)
			{
				tmp[m] = str[j];
				m=m-1;

			}
			for(j=a; j<=b; j++)
			{
				str[j] = tmp[j];
				//printf("str[%d]=%d\n",j,str[j]);
			}
		}
		else if( strcmp("replace", odr) == 0)
		{
			scanf("%s",rwd);
			for(j=a, k=0; j<=b; j++, k++)
			{
				str[j] = rwd[k];
			}
		}
	}

	return 0;
}