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
	int		H,W;
	int		i,j;

	while(1)
	{
		scanf("%d",&H);
		scanf("%d",&W);

		if((H==0) && (W==0))
		{
			break;
		}

		for(i=0; i<H; i++)
		{
			if( i== 0 || i== H-1)
			{
				for(j=0; j<W; j++)
				{
					printf("#");
				}
			}
			else
			{
				for( j=0; j<W; j++)
				{
					if( j==0 || j==W-1 )
					{
						printf("#");
					}
					else
					{
						printf(".");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}