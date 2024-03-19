/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

#define		MXCLEN		1000

int		main(void)
{
	int		i;
	int		x, sum;
	char	str[MXCLEN]={0};

	sum = 0;

	while(1)
	{
		for(i=0; i<MXCLEN; i++)
		{
			str[i]=0;
		}
		fgets( str, MXCLEN, stdin);
		if(strncmp(str,"0",1) == 0)
		{
			//printf("a\n");
			return 0;
		}
		//printf("str=%s\n",str);

		for(i=0; i<MXCLEN; i++)
		{
			if(( '0' <= str[i]) && (str[i] <= '9'))
			{
				x = str[i];
				x = x - '0';
				//printf("x=%d ",x);
				sum = sum + x;
			}
		}
		printf("%d\n",sum );
		sum = 0;
	}
	return 0;
}