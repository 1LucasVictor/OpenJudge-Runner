#include <stdio.h> 

int main(void)
{	
	int H, W, i, j, k;

	while(1)
	{
		scanf("%d %d",&H, &W);

		if(H != 0 && W != 0)
		{
		
			for(i=0; i<W; i++)
			{
				printf("#");
			}

			printf("\n");

			for(j=0; j<H-2; j++)
			{
				printf("#");
				for(k=0; k<W-2; k++)
				{
					printf(".");
				}
				printf("#\n");
			}

			if(W != 1)
			{
				for(i=0; i<W; i++)
				{
					printf("#");
				}
			}
			
		}
		else
		{
			break;
		}

		printf("\n");
	}

	return 0;
}