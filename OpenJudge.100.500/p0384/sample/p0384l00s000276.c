/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>

#define		MXCLEN		1200

int		main(void)
{
	int		i;
	//int		str[MXCLEN];
	char	str[MXCLEN]={0};

	fgets( str, MXCLEN, stdin);

	for( i=0; i<MXCLEN; i++ )
	{
		if(str[i] == '\0')
			break;

		if( 65<=str[i] && str[i]<=90 )
		{
			str[i] = str[i] + 32;
		}
		else if( 97<=str[i] && str[i]<=122 )
		{
			str[i] = str[i] - 32;
		}
		printf("%c",str[i] );
	}

	return 0;
}