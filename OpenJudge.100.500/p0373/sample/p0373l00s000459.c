#include<stdio.h>

int main(void)
{
	int a,b,H,W;

	while(1)
	{
		scanf("%d %d",&H,&W);
		if((H==0)&&(W==0))
		{
			break;
		}
		else
		{
			for(a=1;a<=H;a++)
			{
				for(b=1;b<=W;b++)
				{
					if((a!=1)&&(a!=H)&&(b!=1)&&(b!=W))
					{
						printf(".");
					}
					else
					{
					printf("#");
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}