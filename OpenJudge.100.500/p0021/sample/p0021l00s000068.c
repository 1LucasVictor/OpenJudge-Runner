#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mem(x,y)		(x*)malloc(sizeof(x)*(y))

int main(void)
{
	int n;
	while(scanf("%d",&n),n)
	{
		int i,j,k;
		int* table = mem(int,n);
		for(i = 0;i < n;i++)
		{
			scanf("%d",&table[i]);
			if(i)
				table[i] += table[i-1];
		}
		int max = 0;
		for(i = 0;i < n;i++)
		{
			if(table[i] > max)
				max = table[i];
			for (j = i+1; j < n; j += 1)
			{
				if((table[j]-table[i]) > max)
					max = table[j]-table[i];
			}
		}
		printf("%d\n",max);
		free(table);
	}
	return 0;
}