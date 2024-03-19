#include <stdio.h>

int main(void)
{
	int i=0,j=0,k=0,H=0,W=0;
	for (i = 0; i < 300; ++i)
	{
		scanf("%d %d",&H,&W);
		if(H==0&&W==0)
		{
			break;
		}
		else
		{
			for (i = 0; i < H; ++i)
			{
				if(i==0)
				{
					for ( j = 0; j < W ; ++j)
					{
						printf("#");
					}
					printf("\n");
				}
				if (i>0&&i<H-1)
				{
					for ( j = 0; j < W; ++j)
					{
						if(j==0)
						{
							printf("#");
						}  
						if(j>0&&j<W-1)
						{
							printf(".");
						}
						if (j==W-1)
						{
							printf("#\n");
						}
					} 
			        
			    }
			    if(i==H-1)
			    {
			    	for ( j = 0; j < W ; ++j)
					{
						printf("#");
					}
					printf("\n");
			    }
			printf("\n");
			
			}
		}
	}
	

	return 0;
}					