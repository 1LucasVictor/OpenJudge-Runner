#include <stdio.h>

int main(void)
{
	int i;
	int sum;
	char* px;
	char x[1001];
	
	px = x;
	
	for(i = 0; i < 1001; i++)
	{
		x[i] = '0';
	}
	
	while(1)
	{
		sum = 0;
		for(i = 0; i < 1001; i++)
		{
			x[i] = '0';
		}
		while(1)
		{
			px = x;
			scanf("%s", x);
			//printf("%s\n", x);
			while(*px != '\0')
			{
				sum += (*px - '0');
				px++;
			}
			px = x;
			break;

		}
		
		if(x[0] != '0')
		{
			printf("%d\n", sum);
		}
		else
		{
			//printf("break\n");
			break;
		}
	}
	return 0;
}