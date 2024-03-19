#include<stdio.h>
int main(void)
{
	int H=1,W=1,i,j;
	
	while((H !=0)||(W!=0))
	{
		scanf("%d %d",&H,&W);
		if((H !=0)||(W!=0))
		{
			for(i=0;i<W;i++)
			{
				printf("#");
			}
			printf("\n");
			for(i=0;i<H-2;i++)
			{
				printf("#");
				for(j=0;j<W-2;j++)
				{
					printf(".");
				}
				printf("#\n");
			}
			for(i=0;i<W;i++)
			{
				printf("#");
			}
			printf("\n\n\n");
		}
	}
	return 0;
}

