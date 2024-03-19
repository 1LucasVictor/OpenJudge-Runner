#include <stdio.h>

int main(){
	//n????????????????????°???S??????????????????H???????????????C???????????????D????????????
	int n, S[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		   H[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		   C[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		   D[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		   i,No;
	char Mark;
	do
	{
		scanf("%d", &n);
	} while (n>=52);
	for ( i = 1; i <=n ;)
	{
		scanf(" %c %d", &Mark,&No);
		
		switch (Mark)
		{
		case 'S':
			S[No] = 1;
			i++;
			break;
		case 'H':
			H[No] = 1;
			i++;
			break;
		case 'C':
			C[No] = 1;
			i++;
			break;
		case 'D':
			D[No] = 1;
			i++;
			break;
		default:
			break;
		}
	}
	for (i = 1; i <= 13; i++)
	{
		if (S[i] == 0)
		{
			printf("S %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++)
	{
		if (H[i] == 0)
		{
			printf("H %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++)
	{
		if (C[i] == 0)
		{
			printf("C %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++)
	{
		if (D[i] == 0)
		{
			printf("D %d\n", i);
		}
	}
	return 0;
}