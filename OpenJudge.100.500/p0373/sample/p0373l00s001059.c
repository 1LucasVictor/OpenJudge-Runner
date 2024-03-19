#include <stdio.h>

int main(void)
{
	int H, W;
	int i,j;
    scanf("%d %d",&H,&W);
    (((H>=3)&&(H<=300))&&((W>=3)&&(W>=300)));
    while(!((H==0)&&(W==0)))
	{
		for (i = 1; i <= H; i++)
		{
			for ( j = 1; j <=W ; j++)
			{
				if(((i==1)||(i==H))||((j==1)||(j==W)))
				{
					printf("#");
				}
				else
				{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d",&H,&W);
	}	
	return 0;
}