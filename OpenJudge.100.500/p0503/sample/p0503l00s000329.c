#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int array[200000];
	int is_distinct;

	scanf("%d", &n);
	int i = 0;
	while(i < n - 1 && scanf("%d ", &array[i]) == 1)
		i++;

	is_distinct = 1;
	int j = 0;
	int k = 0;
	while (j < n - 1)
	{
		k = 0;
		while (k < n - 1)
		{
			if (j != k && array[j] == array[k])
				is_distinct = 0;
			k++;
		}
		j++;
	}
	if (is_distinct)
		printf("YES");
	else
		printf("NO");
	return (0);
}