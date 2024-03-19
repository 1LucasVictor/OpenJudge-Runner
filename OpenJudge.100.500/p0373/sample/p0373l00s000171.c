#include <stdio.h>

int a,b;

int main () 
{
	scanf("%d %d",&a,&b);
	while (a!=0||b!=0)
	{
		for (int i=1;i<=a;i++)
		{
			for (int j=1;j<=b;j++)
			{
				if (i==1||i==a||j==1||j==b)
				{
					printf("#");
				} else 
				{
					printf(".");	
				}
			}
			printf("\n");
		}
		scanf("%d %d",&a,&b);
		printf ("\n");	
	}
}
