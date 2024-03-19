#include <stdio.h>

int main(void)          
{
	char ctype;
	int cnumber;
	int have[4][14];
	int n;
	int i, j;

	for (i = 0; i < 4; i++) 
	{
		for (j = 0;j < 14; j++)
		{
			have[i][j] = 0;
		}
	}

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%*c%c %d", &ctype, &cnumber);
		
		if (ctype == 'S')
		{	
			have[0][cnumber] = 1;
		}
		if (ctype == 'H')
		{
			have[1][cnumber] = 1;
		}
		if (ctype == 'C')
		{
			have[2][cnumber] = 1;
		}
		if (ctype == 'D')
		{
			have[3][cnumber] = 1;
		}
	
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 14; j++)
		{
			if (have[i][j] == 0 && i == 0) printf("S %d\n", j);
			if (have[i][j] == 0 && i == 1) printf("H %d\n", j);
			if (have[i][j] == 0 && i == 2) printf("C %d\n", j);
			if (have[i][j] == 0 && i == 3) printf("D %d\n", j);


		}
	}

	return 0;
}