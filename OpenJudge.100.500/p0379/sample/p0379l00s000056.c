#include  <stdio.h>

int main()
{
	int  x[100][100];     
	int y[1000];     
	int a, b;    
	int sum;     
	int i, j;          
	scanf("%d %d", &a, &b);          
	for(i=0; i<a; i++)
	{         
		for(j=0; j<b; j++)
		{             
			scanf("%d", &x[i][j]);         
		}     
	}           
	for(i=0; i<b; i++)
	{         
		scanf("%d", &y[i]);     
	}           
	for(i=0; i<a; i++)
	{        
		sum = 0;         
		for(j=0; j<b; j++)
		{             
			sum += x[i][j]*y[j];         
		}        
		printf("%d\n", sum);    
	}           
	return 0; 
}