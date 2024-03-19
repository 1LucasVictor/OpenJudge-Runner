#include<stdio.h>   
int main()
{        
	int a,b,i,j;       
	while(1)
	{
		scanf("%d %d",&a,&b);         
		if(a==0&&b==0)             
		break;         
		for(i=0;i<a;i++)
		{             
			if(i==0||i==(a-1))
			{                 
				for(j=0;j<b;j++)                     
				printf("#");             
			}             
				else 
				{                 
					printf("#");                 
					for(j=1;j<b-1;j++)                     
					printf(".");                 
					printf("#");             
				}                 
				printf("\n");         
			}         
				printf("\n");     
		}     
				return 0; 
}