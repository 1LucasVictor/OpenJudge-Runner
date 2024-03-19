#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j, n, a[4][13];
	char x[2];
	int y;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 13; j++)
			a[i][j] = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s%d", x,&y);

		if (strcmp(x,"S")==0)
			a[0][y - 1] = 1;
		else if (strcmp(x,"H")==0)
			a[1][y - 1] = 1;
		else if (strcmp(x,"C")==0)
			a[2][y - 1] = 1;
		else
			a[3][y - 1] = 1;
	}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 13; j++)
		{
			if (a[i][j])
				;
			else
			{
				if (i == 0)
					printf("S %d\n", j + 1);
				else if (i == 1)
					printf("H %d\n", j + 1);
				else if (i == 2)
					printf("C %d\n", j + 1);
				else
					printf("D %d\n", j + 1);
			}
		}
	
	return 0;
}