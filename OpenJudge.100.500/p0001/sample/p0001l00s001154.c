#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a, b, sum, i;
	while(scanf("%d%d", &a, &b)!=EOF) 
	{
		i=0;
		sum=a+b;
		while(sum>0)
		{
			i=i+1;
			sum=sum/10;	
		}
		printf("%d\n", i);   
	}
	return 0;
 } 
