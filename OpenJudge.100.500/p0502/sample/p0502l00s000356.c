#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int array[100];

	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		scanf("%d ", &array[i]);
		i++;
	}
	int j = 0;
	while (j < n)
	{
		if (array[j] % 2 == 0)
		{
			if (!(array[j] % 3 == 0 || array[j] % 5 == 0))
			{
				printf("DENIED");
				return 0;
			}
		}
		j++;
	}
	printf("APPROVED");
	return (0);
}

