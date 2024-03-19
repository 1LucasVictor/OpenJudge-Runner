#include <stdio.h>

int main(void)          
{
	int n;
	int i;
	int check = 0, check_n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		check = 0;
		check_n = i;
		while ((check == 0) && (check_n != 0)) 
		{
			if (check > 0) break;
			if (check_n / 10 == 3) check++;
			check_n = check_n / 10;
		}
		if (i % 3 == 0 || check != 0 || i % 10 == 3)	printf(" %d", i);
	}
	printf("\n");
	return 0;
}