#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int num[3];

	scanf("%d", &n);

	for (i = 0; i < 3; i++)
	{
		num[i] = n % 10;
		n /= 10;
	}

	for (i = 0; i < 3; i++)
	{
		if (num[i] == 7)
		{
			printf("Yes\n");
			return 0;
		}	
	}
	printf("No\n");

	return 0;
}