#include <stdio.h>
#include <string.h>

int
main()
{
	char x[1000];
	int i;
	int len;
	int sum;	
	for (;;)
	{
		scanf("%s", x);

		if (strcmp(x, "0") == 0)
			break;

		sum = 0;
		for (i = 0, len = strlen(x); i < len; i++)
		{
			sum += x[i] - '0';
		}
		printf("%d\n", sum);
	}

	return 0;
}