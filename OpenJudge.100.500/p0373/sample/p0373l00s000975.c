#include<stdio.h>
int main(void)
{
	int H=1,W=1,i,j,n;

	while(H!=0&&W!=0)
	{
	 
		scanf("%d %d",&H,&W);
		
		if(H!=0&&W!=0)
	    {
		
		   
	
			for(n=0;W>n;n++)
			{
				printf("#");
			}

			printf("\n");
		
			for(i=0;i<H-2;i++)
			{
				printf("#");
			
				for(j=0;j<n-2;j++)
				{
					printf(".");
				}
			
				printf("#");
			printf("\n");
			}


			for(n=0;W>n;n++)
			{
				printf("#");
			}
			printf("\n");
		printf("\n");
	  
	  }
	
			
		else
		{
		}
	}



	return 0;
}