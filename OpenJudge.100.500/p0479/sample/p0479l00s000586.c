#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, a;
	int *data;

	scanf("%d", &n);

	data = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
		data[i] = 0;

	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &a);
		data[a - 1]++;
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", data[i]);

	free(data);

	return 0;
}