#include <stdio.h>

int main(void) 
{
	int num;
	int i;
	int j;
	int cards[4][13];
	char a;
	int b;
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 13; j++)
		{
			cards[i][j] = 0;
		}
	}
	
	scanf("%d", &num);
	for(i = 0; i < num * 2; i++)
	{
		a = '\0';
		b = 0;
		scanf("%c %d", &a, &b);
		
		if(a == 'S')
		{
			cards[0][b - 1] = 1;
		}
		if(a == 'H')
		{
			cards[1][b - 1] = 1;
		}
		if(a == 'C')
		{
			cards[2][b - 1] = 1;
		}
		if(a == 'D')
		{
			cards[3][b - 1] = 1;
		}
//		printf("[%c][%d]?????\???\n", a, b);
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 13; j++)
		{
			if(cards[i][j] == 0)
			{
				if(i == 0)
				{
					printf("S %d\n", j + 1);
				}
				if(i == 1)
				{
					printf("H %d\n", j + 1);
				}
				if(i == 2)
				{
					printf("C %d\n", j + 1);
				}
				if(i == 3)
				{
					printf("D %d\n", j + 1);
				}
			}
		}
	}
	return 0;
}